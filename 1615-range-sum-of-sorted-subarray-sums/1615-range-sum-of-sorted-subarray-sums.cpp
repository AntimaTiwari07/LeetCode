class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
       vector<int>subarray;
         int sum = 0;
      long long x=0;
      int m = 1000000007;
       for(int i = 0;i<nums.size();++i){
           sum = 0;
         for(int j = i;j<nums.size();++j){
            sum = sum + nums[j];
            subarray.push_back(sum);
           }      
       }
        sort(subarray.begin(),subarray.end());
       for(int  k = left-1;k<=right-1;++k){
        x = (x + subarray[k])%m;
       }
      
     return x; 
    }
};