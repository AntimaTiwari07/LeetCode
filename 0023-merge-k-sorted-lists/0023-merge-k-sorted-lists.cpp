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
    // ListNode* l = a;
    // while(l!=NULL){
    //     cout<<l->val<<" ";
    //     l= l->next;
    // }
    // cout<<endl;
    //  l = b;
    // while(l!=NULL){
    //     cout<<l->val<<" ";
    //     l = l->next;
    // }
    // cout<<endl;
    ListNode* temp = new ListNode(-1);
    ListNode* x = temp;
    while(a!=NULL && b!=NULL){
        if(a->val<=b->val){
            x->next = a;
            a = a->next;
            x = x->next;
        }
        else{
            x->next = b;
            b = b->next;
            x = x->next;
        }
    }
    if(a==NULL)x->next = b;
    else x->next = a;
    return temp->next;
}
ListNode* sortList(ListNode* head){
    if(head==NULL || head->next==NULL)return head;
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast= fast->next->next;
    }

    ListNode* b = slow->next;
    slow->next = NULL;
    ListNode* a = head;
    a = sortList(a);
    b = sortList(b);
    ListNode* c = merge(a,b);
    // cout<<"merge list == ";
    //  ListNode* l = c;
    // while(l!=NULL){
    //     cout<<l->val<<" ";
    //     l = l->next;
    // }
    // cout<<endl;
    return c;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* x = new ListNode(-1);
        ListNode* curr = x;
        for(int i = 0;i<lists.size();i++){
           curr->next  = &lists[i][0];
           while(curr->next!=NULL){
              curr = curr->next;
           }
        }
        ListNode* temp = x->next;
        if(temp==NULL || temp->next==NULL)return temp;
        return sortList(temp);
    }
};