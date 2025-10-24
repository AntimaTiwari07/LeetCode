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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        int len = 0;
        while(curr!=NULL){
            len+=1;
            curr = curr->next;
        }cout<<len<<endl;
        curr = head;
        ListNode* first = NULL;ListNode* last = NULL;
        vector<vector<ListNode*>>v;
        int extra = len%k;
        for(int i = 1;i<=len-extra;i+=k){
            prev = NULL;
            for(int j = i;j<k+i;j++){
                if(j==i){
                    first = curr;
                }
                if(j==k+i-1){
                    last = curr;
                }
                Next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = Next;
            }
            v.push_back({first,last});
            first = NULL,last = NULL; 
        }
        for(int i = 0;i<v.size();i++){
            cout<<v[i][0]->val<<" "<<v[i][1]->val<<endl;
        }
         head = v[0][1];
        if(v.size()>1){
        for(int i = 0;i<v.size()-1;i++){
           v[i][0]->next = v[i+1][1];
        }
        }
        v[v.size()-1][0]->next = curr;
        return head;
    }
};