class Solution {
public:
void subset(vector<int>& nums,long long x,long long &maxi,int &cnt,int i){
    if(i==nums.size()){
       if(x==maxi)cnt+=1;
        return;
    }
    subset(nums,(x|nums[i]),maxi,cnt,i+1);
    subset(nums,x,maxi,cnt,i+1);
}
    int countMaxOrSubsets(vector<int>& nums) {
        long long maxi = 0;
        for(int i = 0;i<nums.size();i++){
            maxi = (maxi | nums[i]);
        }
        int cnt = 0;
        subset(nums,0,maxi,cnt,0);
        
        return cnt;
    }
};