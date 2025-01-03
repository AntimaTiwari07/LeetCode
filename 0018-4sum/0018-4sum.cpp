class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4)return{};
        vector<vector<int>>ans;
        //sort
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-3;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            long long n1 = nums[i];
            //3 sum
            for(int j = i+1;j<nums.size()-2;j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
             long long n2 = nums[j];

             int k = j+1;
             int l = nums.size()-1;
             //2 sum
             while(k<l){
                if(nums[k]+nums[l]<target-n2-n1){
                    k++;
                }
                else if(nums[k]+nums[l]>target-n2-n1){
                    l--;
                }
                else{
                    while(k<l && nums[k]==nums[k+1]) k++;
                    while(k<l && nums[l]==nums[l-1])l--;
                    ans.push_back({(int)n1,(int)n2,nums[k],nums[l]});
                    k++;
                    l--;
                }
             }
            }
        }
        return ans;
    }
};