class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long>v(nums.size());
        v[0]=nums[0];
        int count = 0;
        for(int i = 1;i<nums.size();i++){
             v[i]=nums[i]+v[i-1];
        }
        for(int i = 0;i<v.size()-1;i++){
            long long left = v[i];
            long long right = v[v.size()-1]-v[i];
            if(left>=right)count++;
        }
        return count;
    }
};