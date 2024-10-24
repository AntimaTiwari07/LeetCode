class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<int>max_num;
        int ans = -1;
        int maxn = 0;
        for(int i = 0;i<nums.size();i++){
            maxn = 0;
            int number = nums[i];
           while(number!=0){
             maxn = max(maxn,number%10);
             number = number/10;
           }
           max_num.push_back(maxn);
        }
        for(int i = 0;i<max_num.size();i++){
            for(int j = i+1;j<max_num.size();j++){
                if(max_num[i]==max_num[j]){
                   ans = max(ans,(nums[i]+nums[j]));
                }
            }
        }
        return ans;
    }
};