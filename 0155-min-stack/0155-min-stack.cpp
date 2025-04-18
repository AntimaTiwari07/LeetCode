class MinStack {
    private:
    struct Node{
        int val ;
        Node *next ;
        Node(int v){
         val = v;
         this->next = NULL;
        }
    };
     Node *head;
public:
    MinStack() {
        head = nullptr;
    }
    
    void push(int val) {
        Node * temp = new Node(val);
        temp->next = head;
        head = temp;
    }
    
    void pop() {
       if(head!=NULL){
        head = head->next;
       } 
       else{
        return;
       }
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        Node * curr = head;
        int minval = INT_MAX;
        while(curr!=NULL){
            minval = min(minval,curr->val);
            curr =curr->next;
        }
        return minval;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */