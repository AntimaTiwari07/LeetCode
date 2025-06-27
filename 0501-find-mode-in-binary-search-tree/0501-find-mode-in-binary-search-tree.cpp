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
void solve(TreeNode* root,long long &num,int &ans,int &count){
    if(root==NULL)return;
    solve(root->left,num,ans,count);
    if(root->val == num){
        count+=1;
        ans = max(ans,count);
    }
    else{
        num = root->val;
        count = 1;
    }
    solve(root->right,num,ans,count);
}
  void same_c(TreeNode* root,int &count,long long &num,int &c,vector<int>&v){
    if(root==NULL)return;
    same_c(root->left,count,num,c,v);
    if(root->val == num){
        c+=1;
    }
    else{
        num = root->val;
        c = 1;
    }
     if(c==count)v.push_back(root->val);
    same_c(root->right,count,num,c,v);
  }
    vector<int> findMode(TreeNode* root) {
        int ans = INT_MIN;
        int count = 0;
        long long first = 100001;
       solve(root,first,ans,count);
       if(ans==INT_MIN)ans = 1;
       cout<<ans<<endl;
       int c =0;
      vector<int>v;
    same_c(root,ans,first,c,v);
    return v;
    }
};