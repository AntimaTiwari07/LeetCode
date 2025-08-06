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
    long long kthLargestLevelSum(TreeNode* root, int k) {
      queue<TreeNode*>q;
      if(root==NULL)return -1;
      q.push(root);
      q.push(NULL);
      long long sum = 0;
      vector<long long>v;
      while(!q.empty()){
        TreeNode * curr = q.front();
        q.pop();
        if(curr){
            sum+=curr->val;
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
        }
        else {
            v.push_back(sum);
            if(!q.empty())q.push(NULL);
            sum = 0;
        }
      } 
      if(v.size()<k)return -1;
      sort(v.rbegin(),v.rend());
      return  v[k-1];
    }
};