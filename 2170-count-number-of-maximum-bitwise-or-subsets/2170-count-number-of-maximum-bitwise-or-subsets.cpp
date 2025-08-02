class Solution {
public:
void subset(vector<int>& nums,long long x,vector<int>&v,long long &maxi,int i){
    if(i==nums.size()){
        maxi = max(maxi,x);
        v.push_back(x);
        return;
    }
    subset(nums,(x|nums[i]),v,maxi,i+1);
    subset(nums,x,v,maxi,i+1);
}
    int countMaxOrSubsets(vector<int>& nums) {
        long long maxi = 0;
        vector<int>v;
        subset(nums,0,v,maxi,0);
        int cnt = 0;
        for(int i = 0;i<v.size();i++){
            if(v[i]==maxi)cnt+=1;
        }
        return cnt;
    }
};