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
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        bool even = (fast==NULL);
        ListNode *newlist = nullptr;
        
        if(!even) slow = slow->next;

        while(slow!=NULL){
        ListNode *newnode = new ListNode(slow->val);
          newnode->next = newlist;
          newlist = newnode;
          slow = slow->next;
        }
      
        ListNode *curr = head;

        while(newlist!=NULL){
            if(curr->val != newlist->val){
                 return false;
            }
          
            curr = curr->next;
            newlist = newlist->next;
        }

        return true;
    }
};