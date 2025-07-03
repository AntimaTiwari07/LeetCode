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
void solve(TreeNode* root,int level,vector<int>&ans){
    if(root==NULL)return;
   ans[level]=root->val;
    solve(root->left,level+1,ans);
    solve(root->right,level+1,ans);
}
    vector<int> rightSideView(TreeNode* root) {
        int size = level(root);
             vector<int>ans(size);
        solve(root,0,ans);
        return ans;
    }
};