class Solution {
public:
    string getPermutation(int n, int k) {
        int factorial = 1;
        string s = "";
        for(int i = 1;i<=n;i++){
            s+=(char)(i+'0');
            factorial*=i;
        }
        k--; //0 based ke liye
        string ans = "";
        for(int i = n;i>0;i--){
            factorial/=i;
             int idx = k/factorial;
             ans = ans+s[idx];
             s.erase(s.begin()+idx);
             k %= factorial;
        }
        return ans;
    }
};