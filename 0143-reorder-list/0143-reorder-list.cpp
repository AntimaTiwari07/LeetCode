/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;                                                                                                                      nn                                                                            
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* st = head;
        ListNode* end = head;
        while(end->next!=NULL && end->next->next!=NULL){
            st = st->next;
            end = end->next->next;
        }
        cout<<st->val<<endl;
        ListNode* sec = st->next;
        st->next = NULL;
        //reverse the sec list
        ListNode* curr = sec;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=  next;
        }
        sec = prev;
      //merge
      ListNode* fnext = NULL;ListNode* snext = NULL;
      ListNode* fir = head;
      while(fir!=NULL){
        if(fir!=NULL)fnext = fir->next;
        if(sec!=NULL)snext = sec->next;
        if(fir!=NULL)fir->next = sec;
        if(sec!=NULL)sec->next = fnext;
        fir= fnext;
        sec = snext;
      }
      head = fir;
    }
};