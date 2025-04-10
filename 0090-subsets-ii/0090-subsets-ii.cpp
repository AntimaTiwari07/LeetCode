class Solution {
public:
void solve(vector<int>&nums,vector<int>&temp,int i,vector<vector<int>>&ans){
    if(i==nums.size()){
       ans.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    solve(nums,temp,i+1,ans);//take
    temp.pop_back();//backtrack
    //important
    int idx = i+1;
    while(idx<nums.size()&& nums[idx]==nums[idx-1])idx++;
    solve(nums,temp,idx,ans);//not take
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
         sort(nums.begin(),nums.end());
        solve(nums,temp,0,ans);
       
       
        return ans;
    }
};