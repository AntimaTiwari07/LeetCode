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
void search(TreeNode* root,vector<int>&v){
    if(root==NULL)return ;
    search(root->left,v);
    v.push_back(root->val);
    search(root->right,v);
}
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        search(root,v);
        for(int i = 0;i<v.size();i++){
            int st = i+1;
            int end = v.size()-1;
            int mid;
            while(st<=end){
                mid = st+(end-st)/2;
                if(v[mid]==(k-v[i]))return true;
                else if(v[mid]<(k-v[i]))st = mid+1;
                else end = mid-1;
            }
        }
        return false;
    }
};