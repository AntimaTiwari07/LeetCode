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
void inorder(TreeNode* root, int k,int &ans,int &cnt){
    if(root==NULL)return;
    inorder(root->left,k,ans,cnt);
    cnt+=1;
    if(cnt==k){ans = root->val;}
    inorder(root->right,k,ans,cnt);
}
    int kthSmallest(TreeNode* root, int k) {
        int ans = INT_MAX;
        int cnt = 0;
        inorder(root,k,ans,cnt);
        return ans;
    }
};