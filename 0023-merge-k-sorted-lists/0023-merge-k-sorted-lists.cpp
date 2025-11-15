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
ListNode* merge(ListNode* a,ListNode* b){
    ListNode* x = new ListNode(-1);
    ListNode* temp= x;
    while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
            temp->next = a;
            a = a->next;
            temp = temp->next;
        }
        else{
          temp->next = b;
          b = b->next;
          temp = temp->next;
        }
    }
    if(a==NULL)temp->next = b;
    else temp->next = a;
    return x->next;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return NULL;
        if(lists.size()==1)return &lists[0][0];

         ListNode* a = &lists[0][0];
         ListNode* b = &lists[1][0];
         ListNode* c = merge(a,b);
        for(int i = 2;i<lists.size();i++){
           c = merge(&lists[i][0],c);
        }
        return c;
    }
};