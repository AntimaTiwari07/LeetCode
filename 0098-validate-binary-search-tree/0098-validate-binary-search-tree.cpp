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
bool check(TreeNode* root,long long min,long long max){
    if(root==NULL)return true;
    else if(root->val >min && root->val<max){
        bool l = check(root->left,min,root->val);
        bool r = check(root->right,root->val,max);
        return l && r;
    }
    else return false;
}
    bool isValidBST(TreeNode* root) {
       // if((root->val>=INT_MIN && root->val<=INT_MAX) && root->left == NULL && root->right== NULL)return true;
       return check(root,LLONG_MIN,LLONG_MAX);
    }
};