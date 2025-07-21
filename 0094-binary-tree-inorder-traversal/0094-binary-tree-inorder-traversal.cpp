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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>st;
        if(root==NULL)return v;
        st.push(root);
        while(!st.empty()){
            if(st.top()->left!=NULL){
           st.push(st.top()->left);
            }
           else{
            TreeNode* curr = st.top();
            st.pop();
            v.push_back(curr->val);
            while(!st.empty()&&curr->right==NULL){
                v.push_back(st.top()->val);
                curr = st.top();
                st.pop();
            }
            if(curr->right!=NULL)st.push(curr->right);
           }
        }
        return v;
    }
};