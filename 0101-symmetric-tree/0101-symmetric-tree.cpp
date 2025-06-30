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
bool helper(TreeNode* t1,TreeNode* t2){
    if(t1==NULL && t2==NULL)return true;
    if(t1!=NULL && t2==NULL)return false;
    if(t1==NULL && t2!=NULL)return false;
    if(t1->val!=t2->val)return false;
    bool l = helper(t1->left,t2->right);
    if(l==false)return false;
    bool r = helper(t1->right,t2->left);
    if(r==false)return false;
    return true;

}
    bool isSymmetric(TreeNode* root) {
        return helper(root,root);
    }
};