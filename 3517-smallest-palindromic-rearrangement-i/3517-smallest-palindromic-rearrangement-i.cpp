class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>cnt(26,0);
        for(int i = 0;i<s.size();i++){
            cnt[s[i]-'a']++;
        }
        string p= "";
        string rem= "";
        for(int i = 0;i<26;i++){
            if(cnt[i]%2!=0){
                rem+= (i+'a');
            }  
           string t = string(cnt[i]/2,i+'a');
           p+=t;        
        }
        string x = p;
        reverse(x.begin(),x.end());
        return p+rem+x;
    }
};