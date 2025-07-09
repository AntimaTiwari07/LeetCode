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
TreeNode* solve(vector<int>& nums,int st,int end){
    if(st>end || st<0 || end>=nums.size())return NULL; 
    int maxi = INT_MIN;
    int idx = -1;
    for(int i = st;i<=end;i++){
       if(nums[i]>maxi){
        maxi = nums[i];
        idx = i;
       }
    }
    TreeNode* curr = new TreeNode(maxi);
    curr->left = solve(nums,st,idx-1);
    curr->right = solve(nums,idx+1,end);
    return curr;
}
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};