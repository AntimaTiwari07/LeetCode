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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *small = new ListNode (-1);
        ListNode *a = small;
        ListNode *large = new ListNode(100);
        ListNode *b = large;
        ListNode * curr = head;
        if(head==NULL || head->next==NULL) return head;
        while(curr!=NULL){
            if(curr->val<x){
                ListNode * node = new ListNode(curr->val);
                a->next = node;
                a = node;
            }
            else{
                ListNode * node = new ListNode(curr->val);
                b->next = node;
                b = node;
            }
            curr = curr->next;
        }
        a->next = large->next;
        return small->next;
    }
};