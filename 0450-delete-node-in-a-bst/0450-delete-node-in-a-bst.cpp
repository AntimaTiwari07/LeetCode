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
    TreeNode*  deletenode(TreeNode* root, int key){
    if(root==NULL)return NULL ;
    //search the key node
    if(root->val==key){
        //0 child
        if(root->left==NULL && root->right==NULL){delete root;return NULL;}
        //1 child

        //left child
       else if(root->left!=NULL && root->right==NULL){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        else if(root->left==NULL && root->right!=NULL){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }

        else if(root->left!=NULL && root->right!=NULL) {
        TreeNode * temp = root;
        if( temp->right) temp = temp->right;
        while(temp->left!=NULL){
            temp = temp->left; 
        }
         root->val = temp->val;
         root->right = deletenode(root->right,temp->val);
         return root;
        }
    }
     if(root->val<key){
        root->right = deletenode(root->right,key);
    }
       else root->left = deletenode(root->left,key);
      return root;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        return deletenode(root,key);      
    }
};