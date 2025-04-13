class Solution {
public:
 ListNode* merge(ListNode* a, ListNode* b) {
        ListNode *c = new ListNode(-1);
        ListNode* temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                temp->next = a;
                a = a->next;//a ko aage bada do
                temp = temp->next;//temp ko aage bada do
            }
            else{
                 temp->next = b;
                b = b->next;//a ko aage bada do
                temp = temp->next;//temp ko aage bada do
            }
        }
        if(a==NULL) temp->next = b;
        else temp->next = a;    
        return c->next;
    }
//sc = O(1)
//tc = O(nlogn)
    ListNode* sortList(ListNode* head) {
        //base case
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode * slow = head;
        ListNode *fast = head;
        //left middle find out kia
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        //now sloq at left middle
        ListNode *a = head;//list 1   4,2
        ListNode *b = slow->next;//list 2    1,3
        slow->next = NULL;
        //recursion
        a = sortList(a);
        b = sortList(b);
        ListNode *c = merge(a,b);
        return c;
    }
};