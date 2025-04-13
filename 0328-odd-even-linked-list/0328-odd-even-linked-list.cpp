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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *even = new ListNode(-1);
        ListNode *a = even;
         ListNode *odd = new ListNode(-1);
         ListNode *b = odd;
          ListNode *curr = head;
          int i = 1;
          while(curr!=NULL){
            if( i%2!=0){
                ListNode *node = new ListNode(curr->val);
                b->next = node;
                b = node;
            }
            else{
                ListNode *node = new ListNode(curr->val);
                a->next = node;
                a = node; 
            }
            curr = curr->next;
            i++;
          }
        b->next = even->next;
        return odd->next;
    }
};