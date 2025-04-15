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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *a = l1;
       ListNode *b = l2;
       int div = 0;
       int rem = 0;
       ListNode * newlist = new ListNode(100);
       ListNode *c = newlist;
       while(a!=NULL && b!=NULL){
        int sum = a->val+b->val+div;
          rem = sum%10;
          div = sum/10;
          ListNode * temp = new ListNode(rem);
          c->next = temp;
          c = temp;
          a = a->next;
          b= b->next;
       }
        while(b!=NULL){
        int sum = b->val+div;
          rem = sum%10;
          div = sum/10;
          ListNode * temp = new ListNode(rem);
          c->next = temp;
          c = temp;
          b = b->next;
        }
       while(a!=NULL){
         int sum = a->val+div;
          rem = sum%10;
          div = sum/10;
          ListNode * temp = new ListNode(rem);
          c->next = temp;
          c = temp;
          a = a->next;
       } 
       if(div!=0){
        ListNode * temp = new ListNode(div);
          c->next = temp;
          c = temp;
       }
       return newlist->next;
    }
};