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
ListNode* rev(ListNode* head){
    ListNode* next = NULL;
    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
    int pairSum(ListNode* head) {
        //half 
        //second hav rev
        //both list sum
        ListNode* st = head;
        ListNode* end = head;
        while(end->next->next!=NULL){
            st = st->next;
            end= end->next->next;
        }
        ListNode* temp = st->next;
        st->next = NULL;
        //rev st;
        temp  = rev(temp);
        ListNode* curr = head;
        ListNode* curr2 = temp;
        int maxi = INT_MIN;
        while(curr!=NULL){
           
            maxi = max(maxi,curr->val+curr2->val);
            curr = curr->next;
            curr2 = curr2->next;
        }
        return maxi;
    }
};