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
int level(TreeNode* root){
    if(root==NULL)return 0;
    return 1+max(level(root->left),level(root->right));
}
void solve(TreeNode* root,int level,vector<vector<int>>&v){
    if(root==NULL)return;
    v[level].push_back(root->val);
    solve(root->left,level+1,v);
    solve(root->right,level+1,v);
}
    vector<int> rightSideView(TreeNode* root) {
        int size = level(root);
             vector<vector<int>>v(size+1);
        solve(root,1,v);
        vector<int>ans;
        for(int i = 1;i<v.size();i++){
           ans.push_back(v[i][v[i].size()-1]);
        }
        return ans;
    }
};