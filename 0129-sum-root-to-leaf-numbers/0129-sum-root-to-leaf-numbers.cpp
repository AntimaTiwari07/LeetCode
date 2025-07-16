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
int sum(TreeNode* root,int n,int &s){
    if(root==NULL)return 0 ;
    n = n*10+(root->val);
    if(root->left==NULL && root->right==NULL){
        s+=n;
    }
    sum(root->left,n,s);
    sum(root->right,n,s);
    return s;
}
    int sumNumbers(TreeNode* root) {
        int s = 0;
        return sum(root,0,s);
    }
};