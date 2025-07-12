/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
     ListNode* val(ListNode* head,int mid){
        ListNode* curr = head;
        for(int i = 0;i<mid;i++){
             curr = curr->next;
        }
        return curr;
     }
     TreeNode* solve(ListNode* head,int st ,int end){
         if(st>end)return NULL;
         int mid = st+(end-st)/2;
         ListNode* value = val(head,mid);
         TreeNode * curr = new TreeNode(value->val);
         curr->left  = solve(head,st,mid-1);
         curr->right = solve(head,mid+1,end);
         return curr;
     }
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode * curr = head;
        int i= 0;
        while(curr!=NULL){
            i++;
            curr= curr->next;
        }
        return solve(head,0,i-1);
    } 
};