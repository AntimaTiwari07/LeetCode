class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        vector<int>idx(52,-1);
        for(int i = 0;i<word.size();i++){
            mp[word[i]]++;
            if(word[i]>='A'&& word[i]<='Z' && idx[word[i]-'A'+26]==-1){
                idx[word[i]-'A'+26] = i;
              //  cout<<word[i]<<" "<<word[i]-'A'+26<<endl;
        }
            else if(word[i]>='a'&& word[i]<='z'){
                idx[word[i]-'a'] = i;
               // cout<<word[i]<<" "<<word[i]-'a'<<endl;
            }
        }
        int cnt = 0;
        for(int i = 0;i<52;i++)
{
    cout<<i<<" "<<idx[i]<<endl;
}        for(int i = 0;i<word.size();i++){
            if(word[i]<='Z' && word[i]>='A' && mp[word[i]-'A'+'a']!=0){
                if(idx[word[i]-'A'+26]>idx[word[i]-'A']){     
                    cnt+=1;
                    mp[word[i]-'A'+'a'] = 0;
                }
            }
        }
        return cnt;
    }
};