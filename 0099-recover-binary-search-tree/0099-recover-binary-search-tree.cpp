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
void solve(TreeNode * root,vector<int>&v){
    if(root == NULL)return;
    solve(root->left,v);
    v.push_back(root->val);
    solve(root->right,v);
}
void swap_t(TreeNode* root,vector<int>&ans,TreeNode * &temp, TreeNode * &temp2,bool &swapped){
    if(root==NULL)return;
   if(root->val==ans[0]){
         temp= root;
         cout<<root->val<<" = temp "<<endl;
    }
    if(root->val==ans[1]){
       temp2 = root;   
    }
     if(temp!=NULL && temp2!=NULL && !swapped){
    int  x = temp->val;
    temp->val = temp2->val;
    temp2->val =x;
    swapped= true;
    return;
   }
   swap_t(root->left,ans,temp,temp2,swapped);  
   swap_t(root->right,ans,temp,temp2,swapped);
}
    void recoverTree(TreeNode* root) {
       vector<int>v;
       solve(root,v) ;
       vector<int>sort_v(v.begin(),v.end());
       sort(sort_v.begin(),sort_v.end());
       int k = 0;
       vector<int>ans(2,0);
       for(int i = 0;i<v.size();i++){
        if(v[i]!=sort_v[i]){
            ans[k]=sort_v[i];
            k+=1;
                    }
       }
       TreeNode* x = NULL;
       TreeNode* y = NULL;
       bool swapped = false;
       swap_t(root,ans,x,y,swapped);
    }
};