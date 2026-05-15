class Solution {
public:
    bool isHappy(int n) {
       unordered_map<int,int>mp;
       if(n==1)return true;
        while(n!=1 && mp[n]<=1){
        string s = to_string(n);
        int num  = 0;
        for(int i = 0;i<s.size();i++){
            num = num + ((s[i]-'0')*(s[i]-'0'));
        }
        if(num==1)return true;
       mp[num]++;
        n = num;
        }
    return false;
    }
};