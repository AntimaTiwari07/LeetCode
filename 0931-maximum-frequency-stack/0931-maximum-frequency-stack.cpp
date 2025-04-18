class FreqStack {
    private:
    struct Node{
        int val ;
        Node *next;
        Node(int x){
            val = x;
            this->next = NULL;
        }
    };
    Node *head;
    unordered_map<int,int>mp;
         int maxfreq;
public:
    FreqStack() {
        head = nullptr;
         maxfreq = 0;
    }
    void push(int val) {
        Node *temp = new Node(val);
        mp[val]++;
            temp->next = head;
            head = temp;
    }
    
    int pop() {
        for(auto i:mp){
          if(i.second>maxfreq){
                maxfreq = i.second;
            }
        }
        Node *curr = head;
        Node * fargi = NULL;
    while(curr!=NULL){
        if(mp[curr->val]==maxfreq){
            if(fargi == NULL){
                head = head->next;      
            }
            else{
              fargi->next = curr->next;
          
            }
            maxfreq = 0;
            mp[curr->val]-=1;
            return curr->val;
        }
        fargi = curr;
        curr = curr->next;
    }
    return -1;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */