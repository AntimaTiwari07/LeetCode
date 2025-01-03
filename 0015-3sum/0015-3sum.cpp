class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        //sort the nums because we have to fing element not index
        sort(nums.begin(),nums.end());
        //remove duplicate
        for(int i = 0;i<nums.size()-2;i++){
           if(i>0 && nums[i]==nums[i-1]){
            continue;
           }
            int n1 = nums[i];
            //2 sum
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                int target= -n1;
                 if(nums[j]+nums[k] > target){
                    k--;
                }
                else if(nums[j]+nums[k] < target){
                    j++;
                }
                else{
                   //to remove dupliacte
                   while(j<k && nums[j]==nums[j+1]) j++;
                   while(j<k && nums[k]==nums[k-1]) k--;
                   ans.push_back({n1,nums[j],nums[k]});
                   j++;
                   k--;
                }
            }
        }
        return ans;
    }
};