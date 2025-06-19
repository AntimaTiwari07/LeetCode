class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int key) {
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i+=3){
            if(nums[i+1]-nums[i]<=key && nums[i+2]-nums[i]<=key )
           v.push_back({nums[i],nums[i+1],nums[i+2]});
           else{
            return {};
           }
        }     
      return v;

    }
};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
















































































































