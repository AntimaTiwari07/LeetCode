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

TreeNode* insert(vector<int>&inorder,vector<int>&preorder,int st,int end,int &pre_idx){
    if(st>end )return NULL;
    int curr_val = preorder[pre_idx];
    TreeNode* root = new TreeNode (curr_val) ;
    pre_idx++;
    int idx = -1;
    for(int i = st;i<=end;i++){
        if(inorder[i]==curr_val){
           idx = i;
           break;
        }
    }
      root->left = insert(inorder,preorder,st,idx-1,pre_idx);
             root->right = insert(inorder,preorder,idx+1,end,pre_idx);
  return root;
}
void traverse(TreeNode* root,vector<int>&inorder,vector<int>&preorder,int &val,int &count){
    if(root==NULL)return;
    if(root->val!=val)preorder.push_back(root->val);
    else count+=1;
    traverse(root->left,inorder,preorder,val,count);
    if(root->val!=val)inorder.push_back(root->val);
    traverse(root->right,inorder,preorder,val,count);
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        vector<int>inorder;
        vector<int>preorder;
        int count = 0;
        traverse(root,inorder,preorder,key,count);
        cout<<"count = "<<count<<endl;
        if(count==0)return root;
        int idx = 0;
      return insert(inorder,preorder,0,inorder.size()-1,idx);
    }
};