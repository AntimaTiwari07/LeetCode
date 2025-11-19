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
void s(TreeNode* root){
    if(root==NULL)return;
     s(root->left);
     s(root->right);
    //1 child
    if(root->left!=NULL && root->right==NULL){
       root->right = root->left;
       root->left = NULL;
    }
    //2 child
    if(root->left!=NULL && root->right!=NULL){
        TreeNode* x = root->left;
        while(x->right!=NULL){
         x = x->right;
        }
        x->right = root->right;
        root->right = root->left;
        root->left = NULL;
    }
}
    void flatten(TreeNode* root) {
        s(root);
    }
};