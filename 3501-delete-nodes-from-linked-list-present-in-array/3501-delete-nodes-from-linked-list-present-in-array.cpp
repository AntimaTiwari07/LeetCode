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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        ListNode* curr = head;
        ListNode* list = new ListNode(5);
        ListNode* temp = list;
        while(curr!=NULL){
           if(mp[curr->val]==0){
            ListNode* t = new ListNode(curr->val);
               list->next = t;
             list = list->next;
           }
          curr = curr->next;
        }
        return temp->next;
    }
};