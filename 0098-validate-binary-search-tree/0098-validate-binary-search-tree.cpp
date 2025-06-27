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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>ans;
        while(!st.empty() || root!=NULL){
            if(root!=NULL){
                st.push(root);
                cout<<st.top()->val<<endl;
                root = root->left;
            }
            else{
                ans.push_back(st.top()->val);
                root  = st.top()->right;
                st.pop();
            }
        }
        for(int i = 0;i<ans.size()-1;i++){
            if(ans[i]>=ans[i+1])return false;
        }
return true;
    }
};