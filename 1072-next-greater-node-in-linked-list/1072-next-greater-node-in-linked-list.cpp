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
ListNode * reversee(ListNode* head){
    ListNode* curr = head;
    ListNode* prev = NULL,*NEXT =NULL;
    while(curr!=NULL){
        NEXT = curr->next;
        curr->next = prev;
        prev = curr;
        curr = NEXT;
    }
    return prev;
}
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
       ListNode* newlist = reversee(head);
       stack<int>st;
       ListNode* curr = newlist;
       while(curr!=NULL){
        while(!st.empty()&&st.top()<=curr->val){
            st.pop();
        }
        if(st.empty()){
            ans.push_back(0);
        }
        else{
            ans.push_back(st.top());
        }
        st.push(curr->val);
        curr = curr->next;
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};