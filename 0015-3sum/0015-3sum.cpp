class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<=nums.size()-3;i++){
            while(i>0 && i<nums.size() && nums[i]==nums[i-1]){
                i++;
            }
            int j = i+1;
            int k = nums.size()-1;
            while(k<nums.size() && j<k){
                if(nums[j]+nums[k]==-nums[i]){
                    vector<int>x = {nums[i],nums[j],nums[k]};
                    if(!ans.empty() && ans.back()!=x)ans.push_back(x);
                    if(ans.empty())ans.push_back(x);
                   j++;
                   k--;
                }
                else if(nums[j]+nums[k]<-nums[i]){
                    j++;
                }
                else k--;
            }
        }
        return ans;
    }
};