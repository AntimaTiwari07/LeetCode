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
TreeNode* solve(vector<int>& inorder, vector<int>& postorder,int st,int end,int &post_idx){
    if(st>end || end>=postorder.size() || st<0 )return nullptr;
    TreeNode * root = new TreeNode(postorder[post_idx]);
    int idx = -1;
    for(int i = st;i<=end;i++){
        if(inorder[i]==postorder[post_idx]){
            idx = i;
            break;
        }
    }
    post_idx--;
    root->right = solve(inorder,postorder,idx+1,end,post_idx);
    root->left = solve(inorder,postorder,st,idx-1,post_idx);
    
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int st = 0;
        int end = inorder.size()-1;
        int post_idx = inorder.size()-1;
        return solve(inorder,postorder,st,end,post_idx);
    }
};