class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>diff(nums.size()+1,0);
        for(int i = 0;i<queries.size();i++){
            diff[queries[i][0]]=diff[queries[i][0]]-1;
            diff[queries[i][1]+1]=diff[queries[i][1]+1]+1;
        }
        int k = 0;
        for(int i =1;i<diff.size();i++){
            diff[i]=diff[i]+diff[i-1];
            if(nums[k]+diff[i-1]<=0)nums[k]=0;
            else return false;
            k++;
        }
        return true;
    }
};