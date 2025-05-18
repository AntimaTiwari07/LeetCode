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
    ListNode* swapPairs(ListNode* head) {
        ListNode *curr = head;
        ListNode *s = new ListNode(-1);
         ListNode *c = s;
        while(curr!=NULL && curr->next!=NULL){
            ListNode * first = new ListNode(curr->val);
             ListNode * sec = new ListNode(curr->next->val);
             cout<<curr->val<<" "<<curr->next->val<<endl;
             c->next = sec;
             c = c->next;
             c->next = first;
             c = c->next;
             curr = curr->next->next;
        }
        c->next = curr;
        return s->next;
    }
};