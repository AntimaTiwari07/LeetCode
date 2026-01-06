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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int cnt = 0;
        int maxi = INT_MIN;
        int level = 0;
        int sum = 0;
        while(!q.empty()){
           TreeNode* x = q.front();
           q.pop();
           if(x==NULL){
            cnt+=1;
            if(sum>maxi){
                maxi = sum;
                level = cnt;
            }
            // cout<<sum<<" "<<cnt<<endl;
            sum = 0;
            if(!q.empty())q.push(NULL);
           }
           else{
           sum+=x->val;
           if(x->left!=NULL){
            q.push(x->left);
           }
           if(x->right!=NULL){
            q.push(x->right);
           }
           }
        }
        return level;
    }
};