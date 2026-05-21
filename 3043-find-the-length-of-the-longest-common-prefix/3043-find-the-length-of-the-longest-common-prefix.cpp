class Solution {
public:
        class TrieNode{
            public:
            TrieNode* child[10];
            bool isEnd;
            TrieNode(){
                isEnd = false;
              for(int i = 0;i<10;i++){
                child[i] = NULL;
              }
            }
        };
        class Trie{
            TrieNode* root;
            public:
            Trie(){
                root= new TrieNode();
            }
             void insert(string word){
            TrieNode* node = root;
            for(int i = 0;i<word.size();i++){
                int idx = word[i]-'0';
                if(node->child[idx]==NULL){
                    node->child[idx] = new TrieNode();
                }
                node = node->child[idx];
            }
            node->isEnd = true;
        }

        int prefix(string word){
            TrieNode* node = root;
            int cnt = 0;
            for(int i = 0;i<word.size();i++){
                int idx= word[i]-'0';
                if(node->child[idx]==NULL){
                    return cnt;
                }
                cnt+=1;
                node = node->child[idx];
            }
            return cnt;
        }
          
        };

       
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        Trie trie;
        for(int i= 0;i<arr1.size();i++){
            trie.insert(to_string(arr1[i]));
        }
        int maxi = 0;
        for(int j =0;j<arr2.size();j++){
            maxi = max(maxi,trie.prefix(to_string(arr2[j])));
        }
       return maxi;
    }
};