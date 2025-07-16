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
void solve(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent){
    queue<TreeNode*>q;
     q.push(root);
     parent[root] = NULL;
     while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();
        if(curr->left){q.push(curr->left);parent[curr->left]= curr;}
        if(curr->right){q.push(curr->right);parent[curr->right]= curr;}
     }
}
TreeNode* search(TreeNode* root, int start){
    if(root==NULL)return NULL;
    if(root->val==start)return root;
    TreeNode* Left = search(root->left,start);
    if(Left!=NULL)return Left;
    return search(root->right,start);
}
    int amountOfTime(TreeNode* root, int start) {
        // step 1 = next pointer that connect to parent node
        //step 2 = search start node
        //step 3 =  find time

      unordered_map<TreeNode*,TreeNode*>parent;
     solve(root,parent);
     TreeNode* target = search(root,start);
     

     unordered_map<TreeNode*,bool>visited;
     queue<TreeNode*>q;
     int min = 0;
     q.push(target);
     visited[target]= true;
     while(!q.empty()){
        int size = q.size();
        bool add  = false;
        for(int i = 0;i<size;i++){
           TreeNode * curr = q.front();
            q.pop();
        if(curr->left && visited[curr->left]!=true){
            q.push(curr->left);
        visited[curr->left]= true;
           add = true;
        }
        if(curr->right &&  visited[curr->right]!=true){q.push(curr->right);visited[curr->right]=true;add = true;}
        if(parent[curr]!=NULL &&  visited[parent[curr]]!=true){q.push(parent[curr]);visited[parent[curr]]=true;add = true;}
       
        }
        if(add){min++;}
     }
     return min;
    }
};