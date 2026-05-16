class Solution {
public:
  int bfs(unordered_map<string,vector<string>>&v,string beginWord,string endWord,unordered_map<string,int>&mp){
     queue<string>q;
     q.push(beginWord);
     q.push("0");
     mp[beginWord] = 1;
     int cnt = 0;
     bool exist = false;
     while(!q.empty()){
        string st = q.front();
        q.pop();
        if(st==endWord){
           return cnt+1;
        }
        if(st=="0"){
            cnt+=1;
        if(!q.empty())q.push("0");
        continue;
        }
       for(int i = 0;i<v[st].size();i++){
        if(mp[v[st][i]]==0){
            q.push(v[st][i]);
            mp[v[st][i]] = 1;
        }
       }
   
     }
    
     return 0;
  }
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string,vector<string>>v;
        bool found = false;
        bool add = true;
        for(int i = 0;i<wordList.size();i++){
            if(wordList[i]==beginWord){add = false;}
            if(endWord==wordList[i]){found = true;break;}
            
        }
        if(!found)return 0;
        if(add)wordList.push_back(beginWord);
        for(int i = 0;i<wordList.size();i++){
            string next = wordList[i];
            for(int j = 0;j<wordList.size();j++){
                int diff = 0;
                for(int k = 0;k<wordList[j].size();k++){
                    if(wordList[j][k]!=next[k])diff++;
                }
                if(diff==1)v[next].push_back(wordList[j]);
            }
        }
        //bfs
        unordered_map<string,int>mp;
        return bfs(v,beginWord,endWord,mp);
    }
};