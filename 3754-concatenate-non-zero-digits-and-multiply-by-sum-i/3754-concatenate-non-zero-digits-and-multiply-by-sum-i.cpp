class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = "";
        while(n!=0){
            int rem = n%10;
            if(rem!=0)s+=(rem+'0');
            n/=10;
        }
        reverse(s.begin(),s.end());
        long long sum = 0;
        long long x = 0;
        for(int i = 0;i<s.size();i++){
            sum += s[i]-'0';
            x = x*10+ (s[i]-'0');
        }
        long long ans = x*sum;
        return ans;
    }
};