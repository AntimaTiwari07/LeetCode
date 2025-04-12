/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *first = headA;
        ListNode *sec = headB;
      int len1 = 0;
      int len2 = 0;
      while(first!=NULL){
        len1+=1;
        first = first->next;
      }
      while(sec!=NULL){
        len2+=1;
        sec = sec->next;
      }
      first = headA;
      sec = headB;
      if(len1==len2){
          while(first!=NULL){
            if(first==sec)return first;  
              first= first->next;
              sec= sec->next;
          }
      }
      else if(len1>len2){
        int diff = len1-len2;
         for(int i = 1;i<=diff;i++){
            first = first->next;
         }
         while(first!=NULL){
            if(first==sec)return first;  
              first= first->next;
              sec= sec->next;
             
          }
      }
      else {
         int diff = len2-len1;
         for(int i = 1;i<=diff;i++){
            sec = sec->next;
         }
         while(first!=NULL){
            if(first==sec)return first; 
              first= first->next;
              sec= sec->next;
              
          }
      }
      return NULL;
    }
};