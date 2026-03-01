struct Node{
    Node* links[26] = {nullptr};
    bool flag = false;
    bool containkey(char ch){
        if(links[ch-'a']==NULL)return false;
        else return true;
    }
    void putkey(char ch,Node* node){
        links[ch-'a'] = node;
    }
    Node* getnext(char ch){
        return links[ch-'a'];
    }
    void setend(){
        flag = true;
    }
    bool isend(){
        return flag;
    }
};
class Trie {
    private:
    Node* root;
public:
    Trie() {
       root = new Node(); 
    }
    
    void insert(string word) {
        Node* node = root;
        for(int i = 0;i<word.size();i++){
            if(!node->containkey(word[i])){
                node->putkey(word[i],new Node());
            }
            node = node->getnext(word[i]);
        }
        node->setend();
    }
    
    bool search(string word) {
        Node* node = root;
        for(int i = 0;i<word.size();i++){
            if(!node->containkey(word[i]))return false;
            node = node->getnext(word[i]);
        }
        if(node->isend()==true)return true;
        else return false;
    }
    
    bool startsWith(string prefix) {
        Node* node = root;
        for(int i = 0;i<prefix.size();i++){
             if(!node->containkey(prefix[i]))return false;
            node = node->getnext(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */