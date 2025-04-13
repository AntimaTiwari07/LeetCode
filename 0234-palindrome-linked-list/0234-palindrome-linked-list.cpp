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
ListNode * reverselist(ListNode* head){
    ListNode* curr = head;
    ListNode* NEXT = NULL;
    ListNode* prev = NULL;
    while(curr!=NULL){
        NEXT = curr->next;
        curr->next = prev;
        prev = curr;
        curr = NEXT;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
       ListNode *half = reverselist(slow->next);
       ListNode *a = head;
       while(half!=NULL){
        if(a->val != half->val){
            return false;
        }
        a = a->next;
        half = half->next;
       }
    return true;
    }
};