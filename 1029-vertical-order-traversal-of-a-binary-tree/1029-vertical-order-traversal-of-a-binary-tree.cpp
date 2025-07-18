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
int level(TreeNode* root){
    if(root==NULL)return 0;
    return 1+max(level(root->left),level(root->right));
}
void solve(TreeNode* root,map<pair<int,int>,vector<int>>&mp,int row,int col){
    if(root==NULL)return;
    mp[{col,row}].push_back(root->val);
    solve(root->left,mp,row+1,col-1);
    solve(root->right,mp,row+1,col+1);
}
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>v;
        map<pair<int,int>,vector<int>>mp;
        solve(root,mp,0,0);
         map<int,vector<int>>ans;
        for(auto i:mp){
            pair<int,int>p = i.first;
            cout<<p.first<<" "<<p.second<<endl;
            sort(i.second.begin(),i.second.end());
            vector<int>temp = i.second;
            for(int j = 0;j<temp.size();j++){
                ans[p.first].push_back(temp[j]);
            }
        }
       for(auto i:ans){
        v.push_back(i.second);
       }
        

        return v;
    }
};