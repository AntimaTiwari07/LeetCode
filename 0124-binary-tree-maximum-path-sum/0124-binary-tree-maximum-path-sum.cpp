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
int solve(TreeNode* root,int &maxsum){
    if(root==NULL)return 0;
    int lsum = max(INT_MIN,solve(root->left,maxsum));
    int rsum = max(INT_MIN,solve(root->right,maxsum));
    maxsum = max({maxsum,root->val+lsum+rsum,root->val,root->val+lsum,root->val+rsum});
    return max(root->val+max(lsum,rsum),root->val);
}
    int maxPathSum(TreeNode* root) {
        int maxsum = INT_MIN;
       
         int x = solve(root,maxsum);
         return max(maxsum,x);
    }
};