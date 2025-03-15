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
      while(curr->next!=nullptr){
        size+=1;
        curr= curr->next;
      }
      curr = head;
      if(size%2==0){
        int i = 0;
        int n = (size/2 );
        while(i<n && curr->next != nullptr){
            curr = curr->next;
            i++;
        }
        return curr;
      }
      else{
        int i = 0;
        int n = (size/2);
        while(i<=n && curr->next != nullptr){
            curr= curr->next;
            i++;
        }
        return curr;
      }
    }
};