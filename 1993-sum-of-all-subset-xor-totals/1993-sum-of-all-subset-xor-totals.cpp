class Solution {
public:
void solve(vector<int>&nums,int temp,int i,int & count){
    if(i==nums.size()){
        count+=temp;
        return;
    }
    solve(nums,(temp^nums[i]),i+1,count);
    solve(nums,temp,i+1,count);
}
    int subsetXORSum(vector<int>& nums) {
       int count = 0;
       solve(nums,0,0,count);
       int ans = count;
       
       return  count;
    }
};