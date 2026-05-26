class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp2;
        int cnt = 0;
        for(int i = 0;i<word.size();i++){
            if(word[i]<='z' && word[i]>='a')mp[word[i]]++;
        }
        
        for(int j = 0;j<word.size();j++){
            if(word[j]<='Z' && word[j]>='A' && mp[(word[j]-'A')+'a']!=0){
                mp2[word[j]]++;
            }
        }
        return mp2.size();
    }
};