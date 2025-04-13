class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>count(26,0);
        for(int i = 0;i<s.size();i++){
          count[s[i]-'a']++;
        }
        char odd ;
        //op = odd present
        bool op = false;
       for(int i = 0;i<26;i++){
        if(count[i]!=0 && count[i]%2!=0){
            odd = (char)(i+'a');
            op = true;
        }
       }
       string ans = "";
       for(int i = 0;i<26;i++){
        if(count[i]!=0 ){
            char ch = (char)(i+'a');
            string temp = string(count[i]/2,ch);
            ans+=temp;
            count[i]=count[i]/2;
        }
       }
       if(op)ans+=odd;
        for(int i = 25;i>=0;i--){
            if(count[i]!=0){
                char ch = (char)(i+'a'); 
            string p = string(count[i],ch);
            ans+=p;
            }
        }
        bool valid = true;
        for(int i = 0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-i-1]){
                valid = false;
            }
        }
        if(valid){
            if(s[0]<ans[0])return s;
        }
        return ans;
    }
};