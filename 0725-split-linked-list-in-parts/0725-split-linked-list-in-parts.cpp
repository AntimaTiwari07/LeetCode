class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int len = 0;
         vector<ListNode*>v(k);
        ListNode * curr = head;
        while(curr!=NULL){
            len+=1;
            curr = curr->next;
        }
        int size = len/k;
        int rem = len%k;
        vector<ListNode*>ans;
        curr = head;
        while(curr!=NULL){
            int temp = size;
            if(rem>0) temp+=1;
            rem--;
          ListNode* node = new ListNode(100);
          ListNode *c = node;
             for(int i = 1;i<=temp;i++){
                c->next = curr;
                curr = curr->next;
                c = c->next;
             }
             c->next = NULL;
             ans.push_back(node->next);
        }
        if(ans.size()<k){
            int diff = k-ans.size();
            for(int i = 0;i<diff;i++){
                ans.push_back(NULL);
            }
        }
        return ans;
    }
};