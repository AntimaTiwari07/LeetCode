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
    ListNode* sortList(ListNode* head) {
        ListNode* curr = head;
        vector<int>arr;
        while(curr!=NULL){
            arr.push_back(curr->val);
            curr = curr->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* x = new ListNode(-1);
        ListNode* temp = x;
        for(int i = 0;i<arr.size();i++){
            ListNode* t = new ListNode(arr[i]);
             temp->next = t;
             temp = temp->next;
        }
        return x->next;
    }
};