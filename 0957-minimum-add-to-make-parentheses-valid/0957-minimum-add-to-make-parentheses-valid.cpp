class Solution {
public:
    int minAddToMakeValid(string s) {
        int i  = 0;
        int count = 0;
        int ans = 0;
        int n = s.size();
        if(n==0){
            return 0;
        }
        while(i<n){
            if(s[i]=='('){
               count++;
            }
            else {
              if(count>0)count--;
              else ans++;
            }
           
            i++;
        }
        
            return count+ans;
    }
};