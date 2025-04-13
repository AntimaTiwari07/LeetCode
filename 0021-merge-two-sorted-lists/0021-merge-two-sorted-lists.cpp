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

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* first = list1;
        ListNode*  sec = list2;
        ListNode* newlist = nullptr; //empty linked list
        
        while(first!=NULL && sec!=NULL){
            if(first->val <= sec->val){
               ListNode* newnode = new  ListNode (first->val);
               newnode->next = newlist;
               newlist = newnode;
               first= first->next;
            }
            else{
                ListNode* newnode = new  ListNode (sec->val);
               newnode->next = newlist;
               newlist = newnode;
               sec = sec->next;
            }
        }
        while(first!=NULL){
             ListNode* newnode = new  ListNode (first->val);
               newnode->next = newlist;
               newlist = newnode;
          
               first = first->next;
        }
        while(sec!=NULL){
             ListNode* newnode = new  ListNode (sec->val);
               newnode->next = newlist;
               newlist = newnode;
               sec = sec->next;
        }
        ListNode *newhead = nullptr;
        while(newlist!=NULL){
            ListNode * node = new ListNode(newlist->val);
            node->next = newhead;
            newhead = node;
            newlist= newlist->next;
        }
        return newhead;
    }
};