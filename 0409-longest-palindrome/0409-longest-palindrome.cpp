class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(int i = 0;i<s.size();i++){
            mp[s[i]]++;
        }
        int sum =0;
        int odd = 0;
        int temp = 0;
        int total = 0;
        int cnt = 0;
        for(auto i:mp){
          total+=i.second;
            if(i.second%2==0){
                sum+=(i.second);
            }
            else{   
                 odd+=(i.second);
                cnt+=1;
            }
        }
        if(odd==0 && temp==1)return sum+1;
              return sum+odd-cnt+1;
    }
};