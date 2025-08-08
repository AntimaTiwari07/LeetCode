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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<int>v;
        while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();
        if(curr){
            if(curr->left){
                q.push(curr->left);
                v.push_back(curr->left->val);
            }else v.push_back(101);
            if(curr->right){
                q.push(curr->right);
                v.push_back(curr->right->val);
            }else v.push_back(101);
        }
        else{
            int i  =0;
            int j = v.size()-1;
            while(i<j){
                if(v[i]!=v[j])return false;
                else{
                    i++;
                    j--;
                }
            }
            if(!q.empty()){q.push(NULL);}
            v = {};
        }
        }
  return true;
    }
};