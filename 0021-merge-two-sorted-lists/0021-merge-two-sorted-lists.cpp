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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode * first = a;
        ListNode *sec = b;
        ListNode *c = new ListNode(-1);
        ListNode* third = c;
        while(first!=NULL && sec!=NULL){
            if(first->val<= sec->val){
                ListNode * t = new ListNode(first->val);
                third->next = t;
                third = t;
                first = first->next;
            }
            else{
              ListNode * t = new ListNode(sec->val);
                third->next = t;
                third = t;
                sec = sec->next;
            }
        }
        if(first==NULL){
            third->next = sec;
        }
        else{
            third->next = first;
        }
        return c->next;
    }
};