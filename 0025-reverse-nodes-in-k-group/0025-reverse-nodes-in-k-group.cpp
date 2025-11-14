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
    ListNode* prev = NULL;ListNode* Next = NULL;
    while(curr!=NULL){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* temp = head;
        ListNode* nextNode = NULL;
        ListNode* prevNode = NULL;

        int i = 1;
        while(curr!=NULL){
             if(i%k==0){
                nextNode = curr->next;
                curr->next = NULL;
                ListNode* newhead = reverseList(temp);
                cout<<newhead->val<<endl;
                if(temp==head){
                    head = newhead;
                }
                if(prevNode!=NULL){
                    prevNode->next = newhead;
                }
                prevNode = temp;
                curr = nextNode;
                temp = nextNode;     
                i = 1;  
             }
             else{
                i+=1;
                curr = curr->next;
             }
        }
        prevNode->next = temp;
        return head;
    }
};