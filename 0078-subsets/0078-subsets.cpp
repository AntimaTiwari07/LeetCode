class Solution {
public:
void solve(vector<int>& nums,vector<int>&temp,int i,vector<vector<int>>&s){
    if(i==nums.size()){
       s.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    solve(nums,temp,i+1,s);
    int size = temp.size();
    temp.pop_back();
    solve(nums,temp,i+1,s);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>s;
        vector<int>temp;
        
        solve(nums,temp,0,s);
        return s;
       
    }
};