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
bool duplicate(TreeNode* a,TreeNode* b){
    if(a==NULL && b==NULL)return true;
    if(a==NULL && b!=NULL)return false;
    if(a!=NULL && b==NULL)return false;
    if(a->val!=b->val)return false;
    bool left = duplicate(a->left,b->left);
    bool right = duplicate(a->right,b->right);
        return left && right;
}
TreeNode* insert(TreeNode* root , int val){
    if(root==NULL){
        TreeNode* root = new TreeNode(val);
        return root;
    }
    if(val<root->val){
        root->left = insert(root->left,val);
    }
     if(val>root->val){
        root->right = insert(root->right,val);
     }
     return root;
}
void permutation(string &s,int i,vector<string>&perm){
    if(i==s.size()){
        perm.push_back(s);
        return;
    }
      for(int j = i;j<s.size();j++){
        swap(s[i],s[j]);
        permutation(s,i+1,perm);
        swap(s[i],s[j]);
      }
}
    vector<TreeNode*> generateTrees(int n) {
      string s = "";
      for(int i = 1;i<=n;i++){
        s+=to_string(i);
      }
      vector<string>perm;
      vector<TreeNode*>ans;
      unordered_map<string,int>mp;
      permutation(s,0,perm);
     sort(perm.begin(),perm.end());
      
      
      for(int i = 0;i<perm.size();i++){
        string temp = perm[i];
        TreeNode* root = NULL;
        for(int j = 0;j<temp.size();j++){
            int n = (int)(temp[j]-'0');
           root = insert(root,n);
        }
        ans.push_back(root);
      }
      vector<TreeNode*>unique;
      for(int i = 0;i<ans.size();i++){
        bool present = false;
        for(int j = i+1;j<ans.size();j++){
            if(i!=j && duplicate(ans[i],ans[j])){ 
                present = true;
                break;
            }
        }
        if(!present)unique.push_back(ans[i]);
      } 
       return unique;
    }
};