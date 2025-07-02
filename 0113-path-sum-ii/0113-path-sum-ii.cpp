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
  void solve(TreeNode* root, int &targetSum,int sum,vector<int>temp,vector<vector<int>>&v){
    if(root==NULL)return;
     temp.push_back(root->val);
     sum+=root->val;
    if(sum==targetSum && (root->left==NULL && root->right==NULL)){
             v.push_back(temp);
    }
    solve(root->left,targetSum,sum,temp,v);
    solve(root->right,targetSum,sum,temp,v);
  }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>v;
        vector<int>temp;
        if(root==NULL)return v;
        solve(root,targetSum,0,temp,v);
        return v;
    }
};