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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long int >>q;
        unsigned long long first = -1;
        unsigned  long long last = -1;
        q.push({root,1});
        q.push({NULL,0});
        unsigned long long maxwidth = 0;
        while(!q.empty()){
           pair<TreeNode*,unsigned long long int >p = q.front();
            q.pop();
            TreeNode* curr = p.first;
            if(curr==NULL && p.second==0){
               if(last-first+1>maxwidth){maxwidth = last-first+1;}
                last = -1;
                first = -1;
                if(!q.empty()){
                    q.push({NULL,0});
                }
            }
            else{
            if(first==-1)first = p.second;
             last = p.second; 
            if(curr->left){
                q.push({curr->left,2*p.second});
            }
            if(curr->right){
                q.push({curr->right,2*p.second+1});
            }
            }
        }
        return maxwidth;
    }
};