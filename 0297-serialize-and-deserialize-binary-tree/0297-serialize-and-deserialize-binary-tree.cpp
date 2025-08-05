/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
     void traverse(TreeNode* root,string &inorder,string & preorder){
         if(root==NULL)return ;
         preorder+=to_string(root->val) + "|";
         traverse(root->left,inorder,preorder);

                inorder+= to_string(root->val) + "|";

         traverse(root->right,inorder,preorder);
     }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
       string s = "";
       queue<TreeNode*>q;
       if(root==NULL)return s;
       q.push(root);
       while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();
        if(curr){
        s+= to_string(curr->val) + "|";
         q.push(curr->left);
        q.push(curr->right);
       }
       else s+= "10001|";
       }
       return s;
    }
     
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty())return NULL;
        vector<int>v;
        string str = "";
        for(int i = 0;i<data.size();i++){
            if(data[i]=='|'){
                v.push_back(stoi(str));
                str = "";
            }
            else str+=data[i];
        }
        queue<TreeNode*>q;
        int i = 0;
        if(v[i]==10001)return NULL;
        TreeNode * root = new TreeNode(v[i]);
        i+=1;
        q.push(root);
        while(i<v.size() && !q.empty()){
            TreeNode* curr = q.front();
            q.pop();
               if(v[i]!=10001){curr->left = new TreeNode(v[i]); q.push(curr->left);i+=1;}
               else i+=1;
               if(v[i]!=10001){curr->right = new TreeNode(v[i]); q.push(curr->right);i+=1;}
               else i+=1;
            
        }
        return root;
     }      
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));