struct dListNode{
    public:
    int key;
    int val;
    dListNode* prev;
    dListNode* next;
    dListNode(){
        prev = NULL;
        next = NULL;
    }
     dListNode(int key,int val){
       this-> key = key;
        this-> val = val;
        prev = NULL;
        next = NULL;
    }
};
class LRUCache {
public:
 dListNode* head = new dListNode();
 dListNode* tail = new dListNode();
  unordered_map<int,dListNode*>mp;
 int cap;
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head; 
    }
     void deleteNode(dListNode* node){
    dListNode* afternode = node->next;
    dListNode* beforenode = node->prev;
    afternode->prev = beforenode;
    beforenode->next = afternode;
   }
  void insertNode(dListNode* node){
    dListNode * curr = head;
    node->next = curr->next;
    curr->next->prev = node;
    curr->next = node;
    node->prev = curr; 
   }
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            dListNode* node = mp[key];
            deleteNode(node);
            insertNode(node);
            return node->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            dListNode* node = mp[key];
            deleteNode(node);
            node->val = value;
            insertNode(node);
            return;
        }
        if(mp.size()==cap){
           dListNode* node = tail->prev;
           deleteNode(node);
           mp.erase(node->key);
        }
        dListNode* node = new dListNode(key,value);
        mp[key] = node;
        insertNode(node);
        return;
        }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */