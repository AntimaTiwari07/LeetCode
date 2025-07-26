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
TreeNode*  bst(TreeNode* root,int val){
    if(root==NULL){
    TreeNode* curr = new TreeNode(val);
    return curr;
    }
    if(val<root->val){
        root->left = bst(root->left,val);
    }
    if(val>root->val) root->right= bst(root->right,val);
    return root;
}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root= NULL;
       for(int i = 0;i<preorder.size();i++){
        root = bst(root,preorder[i]);
     
       }
        return root;
    }
};