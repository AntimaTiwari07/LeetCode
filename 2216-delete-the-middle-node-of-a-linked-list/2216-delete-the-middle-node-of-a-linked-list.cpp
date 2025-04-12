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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(head->next==NULL){
            head = NULL;
            return head;
        }
         while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
         }
         ListNode* midd = slow;
         ListNode* temp=head;
         while(temp->next!= NULL &&temp->next!=midd){
            temp=temp->next;
         }
         temp->next = temp->next->next;


return head;
    }
};