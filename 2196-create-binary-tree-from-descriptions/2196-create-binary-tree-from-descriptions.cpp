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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>mp;
        unordered_map<int,int>temp;
        for(int i = 0;i<descriptions.size();i++){
            temp[descriptions[i][0]] = 0;
            temp[descriptions[i][1]] = 0;
            int parent = descriptions[i][0];
            int child = descriptions[i][1];
            int left = descriptions[i][2];
            if(mp[parent]==nullptr){
                mp[parent] = new TreeNode(parent);
            }
            if(left==1){
                if( mp[child]==nullptr){
                mp[parent]->left = new TreeNode(child);
                mp[child] = mp[parent]->left;}
               else mp[parent]->left = mp[child];}
            if(left==0 ){
                if( mp[child]==nullptr){
                mp[parent]->right = new TreeNode(child);
                mp[child] = mp[parent]->right;
                }
            else mp[parent]->right = mp[child];}
            cout<<mp[parent]<<" "<<mp[child]<<endl;
        }
        for(int i = 0;i<descriptions.size();i++){
            temp[descriptions[i][1]] = 1;
        }
        for(auto i:temp){
            if(i.second==0)return mp[i.first];
        }
        return nullptr;
    }
};