class Solution {
public:
int cnt(int n){
    string s = to_string(n);
    if(s.size()<3)return 0;
    int cnt = 0;
    for(int i = 1;i<s.size()-1;i++){
      if(s[i]-'0' > s[i-1]-'0' && s[i]-'0'>s[i+1]-'0') cnt+=1;
      else if(s[i]-'0' < s[i-1]-'0' && s[i]-'0' <s[i+1]-'0') cnt+=1;
    }
    return cnt;
}
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i = num1;i<=num2;i++){
            ans += cnt(i);
        }
        return ans;
    }
};