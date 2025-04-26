class Solution {
public:
void solve(vector<int>&nums,vector<int>&temp,int size,int i, vector<vector<int>>&ans,int k){
    if(size==k){
    ans.push_back(temp);
    return;
    }
    if(size>k)return;
    if(i==nums.size()){
      return;
    }
    //take
    temp.push_back(nums[i]);
    solve(nums,temp,size+1,i+1,ans,k);
    //not take
     temp.pop_back();
     solve(nums,temp,size,i+1,ans,k);
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<int>nums;
        for (int i = 1;i<=n;i++){
            nums.push_back(i);
        }
        int size = 0;
        solve(nums,temp,0,0,ans,k);
        return ans;
    }
};