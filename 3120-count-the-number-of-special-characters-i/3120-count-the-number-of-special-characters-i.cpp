class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        int cnt = 0;
        for(int i = 0;i<word.size();i++){
            mp[word[i]]++;
        }
        
        for(int j = 0;j<word.size();j++){
            if(mp[word[j]]>0 && mp[(word[j]-'a')+'A']>0){
               cnt+=1;
               mp[word[j]] = 0;
            }
        }
        return cnt;
    }
};