/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
bool solve(TreeNode* root, TreeNode* p, TreeNode* q){
    if(root==NULL)return false;
    if(root->val==p->val || root->val==q->val)return true;
    bool left = solve(root->left,p,q);
    bool right = solve(root->right,p,q);
    return left || right;
}
void helper(TreeNode* root, TreeNode* p, TreeNode* q,TreeNode* &ans){
    if(root==NULL)return  ;
     if(root->val==p->val || root->val==q->val){ans =  root;return;}
if(solve(root->left,p,q) && solve(root->right,p,q)){ans = root;return;}
         helper(root->left,p,q,ans);
         helper(root->right,p,q,ans);
 }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       TreeNode * ans = NULL;
       helper(root,p,q,ans);
       return ans;

          
    }
};