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
ListNode* reverseList(ListNode* head){
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* Next = NULL;
    while(curr!=NULL){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        ListNode* curr = head;
        ListNode* temp = NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        if(curr==NULL || curr->next==NULL)return curr;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast->next == NULL){
                temp = slow->next;
                slow = NULL;
            }
        }
        if(temp==NULL){temp = slow->next;
        slow->next = NULL;}
         curr = head;
         ListNode* rev = reverseList(temp);
        while(curr!=NULL && rev!=NULL){
            if(curr->val!=rev->val)return false;
            curr = curr->next;
            rev = rev->next;
        }
        return true;
    }
};