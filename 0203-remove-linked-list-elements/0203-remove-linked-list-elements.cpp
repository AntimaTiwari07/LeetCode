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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode *temp = new ListNode(100);
        ListNode *t = temp;
        t->next = head;
        while(curr!=NULL){
            if(curr->val==val){
                curr = curr->next;
                t->next = t->next->next;
            }
            else{
            curr = curr->next;
            t = t->next;
            }
        }
        return temp->next;
    }
};