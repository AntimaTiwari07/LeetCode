class Solution {
public:
bool solve(string &str ,int i,int j){
    while(i<j&& str[i]==str[j]){
        i++;
        j--;
    }
   if(i>=j)return true;
   return false;
}
    string longestPalindrome(string s) {
        string ans ="";
        int maxlen = 0;
        int idx = -1;
        int size = 0;
        for(int i = 0;i<s.size();i++){
            string str  ="";
            for(int j = i;j<s.size();j++){
                str+=s[j];
                if(solve(str,0,str.size()-1)){
                    if(str.size()>maxlen){
                        maxlen = str.size();
                        idx = i;
                    }
                }
            }
        }
       for(int i = idx;i<idx+maxlen;i++){
        ans+=s[i];
       }
return ans;
    }
};