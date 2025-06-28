/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*>q;
        if(root==NULL)return ans;
        q.push(root);

     while(!q.empty() ){
        int size = q.size();
        vector<int>level;
        for(int i =0;i<size;i++){
            if(q.front()!=NULL)level.push_back(q.front()->val);
            if(q.front()->left!=NULL)q.push(q.front()->left);
            if(q.front()->right!=NULL)q.push(q.front()->right);
            q.pop();
        }
        cout<<endl;
        ans.push_back(level);
     }
     return ans;
    }
};