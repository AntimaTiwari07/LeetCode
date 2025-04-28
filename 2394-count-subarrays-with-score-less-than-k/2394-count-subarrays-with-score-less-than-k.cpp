class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long n  = nums.size();
        long long total = n*(n+1)/2;
        long long i = 0;
        long long j = 0;
        long long sum = 0;
        long long count = 0;
        while(i<n && j<n){
           sum+=nums[j];
           long long mul = sum*(j-i+1);
           while(mul>=k){
            count +=(n-j);
            sum-=nums[i];
            i++;
            mul = sum*(j-i+1);
           } 
           j++;
        }
        return (total-count);
    }
};