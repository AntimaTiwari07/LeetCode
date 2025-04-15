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
     ListNode* reversee(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* NEXT = NULL;
        while(curr!=NULL){
            NEXT = curr->next;
            curr->next = prev;
            prev= curr;
            curr = NEXT;
        }
        return prev;
     }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* first = reversee(l1);
        ListNode* sec = reversee(l2);
        ListNode* a = first;
        ListNode* b = sec;
        ListNode* newlist = new ListNode (0);
        ListNode* c = newlist;
        int div = 0,rem=0;
        while(a!=NULL && b!=NULL){
            int sum = a->val+b->val+div;
            rem = sum%10;
            div = sum/10;
            a->val = rem;
            c->next = a;
            c=c->next;
            a = a->next;
            b = b->next;
        }
        while(a!=NULL){
            int sum = a->val+div;
            rem = sum%10;
            div = sum/10;
            a->val = rem;
            c->next = a;
            c = c->next;
            a = a->next;
        }
        while(b!=NULL){
            int sum = b->val+div;
            rem = sum%10;
            div = sum/10;
            b->val = rem;
            c->next = b;
            c = c->next;
            b = b->next;
        }
        if(div!=0){
            ListNode* node = new ListNode(div);
            c->next = node;
            c = c->next;
        }
        ListNode *ans = reversee(newlist->next);
        return ans;
    }
};