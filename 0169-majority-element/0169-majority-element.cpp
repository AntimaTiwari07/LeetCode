class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0;
        int count ;
        for(int i = 0;i<nums.size();i++){
            count = 0;
            for(int j = i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if((count+1)>((nums.size()-1)/2)){
                    ans = nums[i];
                    break;
            } 
        }
        return ans;
    }
};