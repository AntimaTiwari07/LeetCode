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
   TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int st,int end ,int &pre_idx){
    if(st>end || st<0 || end>=preorder.size()||pre_idx>=preorder.size())return nullptr;
    TreeNode* root = new TreeNode(preorder[pre_idx]);
    int idx = -1;
    for(int i = st;i<=end;i++){
        if(inorder[i]==preorder[pre_idx]){
            idx = i;
            break;
        }
    }
    pre_idx++;
    root->left = solve(preorder,inorder,st,idx-1,pre_idx);
    root->right = solve(preorder,inorder,idx+1,end,pre_idx);
    return root;
   }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pre_idx = 0;
        return solve(preorder,inorder,0,preorder.size()-1,pre_idx);
    }
};