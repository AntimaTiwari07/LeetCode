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
void left_most(TreeNode* root ,int i,unordered_map<int,int>&mp){
    if(root==NULL)return ;
    mp[i]= root->val;
    left_most(root->right,i+1,mp);
    left_most(root->left,i+1,mp);
}
    int findBottomLeftValue(TreeNode* root) {
        unordered_map<int,int>mp;
        left_most(root,0,mp);
        return mp[mp.size()-1];
    }
};