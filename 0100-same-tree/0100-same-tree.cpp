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
void traverse(TreeNode* p,vector<int>&pp){
    if(p==NULL ){
        pp.push_back(10001);
        return ;
    }
    pp.push_back(p->val);
    traverse(p->left,pp);
    traverse(p->right,pp);
} 
void traverse2(TreeNode* q,vector<int>&qq){
    if(q==NULL){
        qq.push_back(10001);
        return;
}
    qq.push_back(q->val);
    traverse2(q->left,qq);
    traverse2(q->right,qq);
}

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int>pp;
        vector<int>qq;
        traverse(p,pp);
        traverse2(q,qq);
        if(pp.size()!=qq.size())return false;
        for(int i = 0;i<pp.size();i++){
            
            if(pp[i]!=qq[i])return false;
        }
        return true;
    } 
};