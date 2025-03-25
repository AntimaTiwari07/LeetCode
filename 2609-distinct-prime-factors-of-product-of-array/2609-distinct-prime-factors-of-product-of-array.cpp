class Solution {
public:
bool is_prime(int x){
    for(int i = 2;i<=x/2;i++){
        if(x%i==0)return false;
    }
    return true;
}
    int distinctPrimeFactors(vector<int>& nums) {
        long long n = 1;
        int cnt[1001]={0};
        for(int i = 0;i<nums.size();i++){
            if(is_prime(nums[i]))cnt[nums[i]]++;
            else {
                 int x = 2;
        while(nums[i]>1){
            if(is_prime(x)){
                  bool valid = false;
                while(nums[i]%x==0){
                    nums[i] = nums[i]/x;
                    valid = true;
                }
                if(valid)cnt[x]++;
            }     
             x+=1;
        }
        }
        }
        int ans=0;
        for(int i = 0;i<1001;i++){
            if(cnt[i]>=1)ans+=1;
        }
        return ans;
    }
};