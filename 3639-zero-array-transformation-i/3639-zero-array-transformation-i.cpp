
class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
       //youtube
       //for prefix sum
       int n = nums.size()+1;
       vector<int>prefixsum(n,0);
       //-1 = start  1 = end
       for(int i = 0;i<queries.size();i++){
        prefixsum[queries[i][0]]=prefixsum[queries[i][0]]+ (-1);
        prefixsum[queries[i][1]+1]= prefixsum[queries[i][1]+1]+1;
       }
       for(int i = 1;i<prefixsum.size();i++){
           prefixsum[i]= prefixsum[i]+prefixsum[i-1];
       }
       for(int i = 0;i<nums.size();i++){
        if(nums[i]!=0)nums[i]=nums[i]+prefixsum[i];
       }
       for(int i = 0;i<nums.size();i++){
        if(nums[i]>0)return false;
       }
       return true;
    }
};
