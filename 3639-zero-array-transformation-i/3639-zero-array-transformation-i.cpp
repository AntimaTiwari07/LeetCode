class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>diff(nums.size()+1,0);
        for(int i = 0;i<queries.size();i++){
            diff[queries[i][0]]=diff[queries[i][0]]-1;
            diff[queries[i][1]+1]=diff[queries[i][1]+1]+1;
        }
        for(int i =1;i<diff.size();i++){
            diff[i]=diff[i]+diff[i-1];
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i]+diff[i]<=0)nums[i]=0;
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=0)return false;
        }
        return true;
    }
};