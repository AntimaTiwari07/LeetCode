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
    ListNode* deleteMiddle(ListNode* head) {
        int size=0;
        ListNode *curr = head;
        while(curr != NULL){
            size+=1;
            curr = curr->next;
        }
        if(size==1)return nullptr;
        curr = head;
        int middidx = size/2;
        for(int i = 1;i<middidx;i++){
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};