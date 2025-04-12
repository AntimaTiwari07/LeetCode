/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       bool cycle_present = false;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                cycle_present = true;
                break;
            }
        }
        ListNode *temp = head;
        if(cycle_present){
            while( temp!=NULL && temp!=slow ){
                temp = temp->next;
                slow = slow->next;
            }
            return temp;
        }
        return NULL;
    }
};