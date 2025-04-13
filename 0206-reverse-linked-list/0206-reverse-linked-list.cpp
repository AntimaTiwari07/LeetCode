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
        //iterative approach
        ListNode * prev = NULL;
         ListNode * NEXT = NULL;
          ListNode * curr = head;
          while(curr){
            NEXT = curr->next;//store index
            curr->next = prev;
            prev = curr;
            curr = NEXT;
          }
          return prev;

    }
};