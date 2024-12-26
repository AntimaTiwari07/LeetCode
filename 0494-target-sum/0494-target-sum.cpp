class Solution {
public:
//to find all subset
int solve(vector<int>&nums,int i ,int currentsum,int target){
    if(i==nums.size()){
        if(currentsum==target) return 1;
        else return 0;
    }
    //to get element with plus sign
    int plus = solve(nums,i+1,currentsum+nums[i],target);
    //to get element with minus sign
    int minus = solve(nums,i+1,currentsum-nums[i],target);
      return plus+minus;
}
    int findTargetSumWays(vector<int>& nums, int target) {   
       return solve(nums,0,0,target);
    }
};