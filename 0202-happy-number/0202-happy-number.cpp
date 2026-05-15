class Solution {
public:
    bool isHappy(int n) {
       unordered_map<int,int>mp;
       if(n==1)return true;
        while(n!=1 && mp[n]<=1){
        int temp = n;
        int num = 0;
        while(temp!=0){
            num = num + pow((temp%10),2);
            temp/=10;
        }
        if(num==1)return true;
       mp[num]++;
        n = num;
        }
    return false;
    }
};