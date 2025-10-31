class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = 0;
       while(i<nums.size()){
            if(nums[i]!=j){
                ans.push_back(nums[i]);
                i++;
            }
            else{     
                i++;
                j++;
            }
        }
        return ans;
    }
};