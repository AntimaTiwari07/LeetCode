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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
     int i = 0;
     ListNode * firsthead = list1;
     ListNode * sechead = list2;
        ListNode * aa = NULL;
         ListNode * bb = NULL;
     while(firsthead!=NULL){
        if(i==(a-1)){
           aa = firsthead;
        }
        else if(i==b){
            bb = firsthead;
        }
        i++;
        firsthead = firsthead->next;
     } 
     while(sechead->next!=NULL){
        sechead = sechead->next;
     }  
     ListNode * sectail = sechead;
     sechead = list2;
     aa->next = sechead;
     sectail->next = bb->next;
     bb->next = NULL;
     return list1;
    }
};