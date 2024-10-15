class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int>ans(nums.size(),0);
       int product = nums[0];
       int product_without_zero = 1;
       for(int i = 1;i<nums.size();i++){
        product = product*nums[i];
       }
       for(int i = 0;i<nums.size();i++){
        if(nums[i]==0) continue;
        else
        product_without_zero = product_without_zero*nums[i];
       }
       int count = 0;
       for(int i = 0;i<nums.size();i++){
            if(nums[i]==0) count++;
       }
       int temp;
       for(int i = 0;i<nums.size();i++){
        if(count>1){
            return ans;
        }
        if(nums[i]==0){
            ans[i]=(product_without_zero ); 
        }else 
        ans[i] = (product/nums[i]);
       }
       return ans;
    }
};