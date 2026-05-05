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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* curr = head;
        int cnt = 1;
         ListNode* last ;
        while(curr->next!=NULL){
            cnt+=1;  
            curr = curr->next;
        }
           last = curr;
           k = k%cnt;
           if(k==0)return head;
           last->next = head;
          curr = head;
          int steps = cnt-k;
        for(int i =1;i<steps;i++){
          curr= curr->next;
        }
        ListNode* newhead = curr->next;
        curr->next = NULL;
        head = newhead;
        return head;
    }
};