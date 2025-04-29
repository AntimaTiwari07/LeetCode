class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long n = nums.size();
        long long i = 0;
        long long j = 0;
         long long maxnum= 0;
        for(int i = 0;i<n;i++){
            maxnum= max(maxnum,(long long)nums[i]);
        }
        long long count = 0;
        long long ans = 0;
        while(i<n && j<n){
            if(nums[j]==maxnum)count+=1;
            while(count>=k){
                ans+=(n-j);
                if(nums[i]==maxnum)count-=1;
                i++;   
            }
            j++;
        }
        return ans;
    }
};