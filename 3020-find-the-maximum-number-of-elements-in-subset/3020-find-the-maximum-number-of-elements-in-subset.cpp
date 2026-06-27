class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long,long long>mp;
        int one = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1)one+=1;
            mp[nums[i]]++;
        }
        int maxi = 1;
        for(auto i:mp){
            if(i.first==1)continue;
            long long x = i.first;
            int cnt = 0;

while (true) {
    auto it = mp.find(x);
    if (it == mp.end() || it->second < 2)
        break;

    cnt += 2;

    if (x > LLONG_MAX / x)
        break;          // x*x overflow karega

    x *= x;
}

if (cnt > 0 && mp.count(x))
    cnt++;
            if(cnt%2==0)cnt-=1;
            maxi= max(maxi,cnt);
        }
        if(one!=0){
            if(one%2==0)one-=1;
        }
        return max(maxi,one);
    }
};