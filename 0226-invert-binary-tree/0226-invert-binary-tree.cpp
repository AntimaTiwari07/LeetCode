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
TreeNode* traverse(TreeNode* root){
    if(root==NULL)return NULL;
    TreeNode* curr = new TreeNode(root->val);
    curr->left = traverse(root->right);
    curr->right = traverse(root->left);
    return curr;
}
    TreeNode* invertTree(TreeNode* root) {
        return traverse(root);
    }
};