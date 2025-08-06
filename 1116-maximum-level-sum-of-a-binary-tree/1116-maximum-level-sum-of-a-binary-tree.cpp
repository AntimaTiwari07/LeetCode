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
        int sum = 0;
        int maxsum = INT_MIN;
        int level = 0;
        int k = 0;
           TreeNode * curr;
        while(!q.empty()){
          curr = q.front();
            q.pop();
            if(curr){
                sum+=curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            else{
                k+=1;
                if(sum>maxsum){
                    maxsum = sum;
                    level = k;
                }
                sum = 0;
                if(!q.empty())q.push(NULL);
            }
        }
        return level;
    }
};