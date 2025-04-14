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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* curr = head;
        while(curr!=NULL){
            int val = curr->val;
            ListNode* temp = curr->next;
            while(temp!=NULL &&temp->val == val){
                temp = temp->next;
            }
            curr->next = temp;
            curr = curr->next;
        }
        return head;
    }
};