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
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* curr = head;
        int len =0;
        while(curr->next!= NULL){
          len+=1;
          curr = curr->next;
        }
        len+=1;
        ListNode *tail = curr;
        k = k%len;
        curr = head;
        for(int i = 1;i<len-k;i++){
          curr = curr->next;
        }
        ListNode * temp = curr;
          curr = head;
          tail->next = head;
          head = temp->next;
          temp->next = NULL;
          return head;
    }
};