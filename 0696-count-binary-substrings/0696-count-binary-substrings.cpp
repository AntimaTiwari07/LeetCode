class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int>v;
        int i = 0;
        int j = 0;
        int cnt = 0;
        int ans = 0;
        int x = 0;
        while(j<s.size()){
            if(s[i]==s[j]){
                cnt+=1;
                j++;
            }
            else{
               if(x==0){
                x = cnt;
               }
               else{
                ans+= min(x,cnt);
                x = cnt;
               }
                cnt = 0;
                while(s[i]!=s[j]){
                    i++;
                }
            }
        }
        
        return ans+min(x,cnt);
    }
};