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
ListNode* merge(ListNode* a,ListNode* b){
    ListNode * x = new ListNode(-1);
    ListNode* curr = x;
     while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
            curr->next = a;
            curr = curr->next;
            a = a->next;
        }
        else{
            curr->next = b;
            curr = curr->next;
            b = b->next;
        }
     }
    
    if(a==NULL)curr->next = b;
    else curr->next = a;
    return x->next;
}
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow->next!=NULL && fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *a = head;
        ListNode *b = slow->next;
        slow->next = NULL;
        ListNode* x = sortList(a);
        ListNode* y = sortList(b);
        ListNode *c = merge(x,y);
        return c;
    }
};