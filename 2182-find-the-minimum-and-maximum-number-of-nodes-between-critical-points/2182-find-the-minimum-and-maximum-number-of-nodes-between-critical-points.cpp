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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int mindis = INT_MAX;
        int maxdis = 0;
        int first = 0;
        int sec = 100000;
        int mf = -1;
        int ms = -1;
         ListNode * prev = head;
        ListNode * curr = head->next;
         ListNode * NEXT = head->next->next;
         int i = 2;
         while(NEXT!=NULL){
             if((prev->val < curr->val && NEXT->val < curr->val) || (prev->val > curr->val && NEXT->val > curr->val)){
                if(mf==-1){
                    mf = i;
                }
                else{
                    ms = i;
                }
               first = sec;
                sec = i;
               mindis = min(mindis,abs(sec-first));
               
             }
             prev = prev->next;
             curr = curr->next;
             NEXT = NEXT->next;
             i+=1;
         }
         maxdis = ms-mf;
         if(maxdis>0 && mindis>0){
            return{mindis,maxdis};
         }

         
         return {-1,-1};
    }
};