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
    ListNode* middleNode(ListNode* head) {
      ListNode *curr = head;
      int size = 0;
      while(curr!=NULL){
        size+=1;
        curr= curr->next;
      }
      curr = head;
     int midlen = size/2;
     for(int i = 1;i<=midlen;i++){
       curr= curr->next;
     }
     return curr;
    }
};