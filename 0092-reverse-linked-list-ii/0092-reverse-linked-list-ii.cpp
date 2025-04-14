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
 ListNode* reversee(ListNode* a,ListNode*b){
    ListNode* curr = a;
    ListNode* NEXT = NULL,*prev = NULL;
    while(prev!=b){
        NEXT = curr->next;
        curr->next = prev;
        prev = curr;
        curr = NEXT;
    }
    return prev;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)return head;
        if(head==NULL ||  head->next==NULL){
            return head;
        }
        int i = 1;
        ListNode *a = NULL;
        ListNode *b = NULL;
        ListNode *c = NULL;
        ListNode *d = NULL;
        ListNode *curr = head;
        while(curr!=NULL){
            if(left-1 >0 && i==(left-1))  a = curr;
             if(i==left) b = curr;
             if(i==right) c = curr;
             if( i==(right+1)) d = curr;
             curr = curr->next;
                   i++;
        }
       ListNode* temp =  reversee(b,c);
       if(a!=NULL){
        a->next = c;
       }
       else{
        head = c;
       }
       b->next = d; 
        return head;
    }
};