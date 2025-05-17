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
        if(head==NULL || head->next==NULL)return head;
        ListNode* temp = new ListNode(1);
        ListNode* c = temp;
        ListNode *curr = head;
        int size = 0;
        while(curr!=NULL){
            size+=1;
            curr = curr->next;
        }
        curr = head;
        if(size%2==0){
        while(curr->next->next!=NULL){
            c->next = curr->next;
            curr->next = curr->next->next;
            curr = curr->next;
            c = c->next;
        }
            c->next = curr->next;
            c = c->next;
        }
       else {

       while(curr->next!=NULL){
            c->next = curr->next;
            curr->next = curr->next->next;
            curr = curr->next;
            c = c->next;
        }
       }
        c->next = NULL;
        curr->next = temp->next;
  return head;

    }
};