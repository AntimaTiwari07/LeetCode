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

    ListNode* reverseList(ListNode* head) {
     //create a empty linked list 
     ListNode *newhead = nullptr;

     while(head!=NULL){
        ListNode *newnode = new ListNode(head->val);
        newnode->next = newhead;
        newhead = newnode;
        head = head->next;
     }
     return newhead;
      
    }
};