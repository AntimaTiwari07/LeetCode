class Solution {
public:
bool check_sorted(vector<int>&nums){
    for(int i = 0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            return false;
        }
    }
    return true;
}
    bool canSortArray(vector<int>& nums) {
            int count = 0;
            vector<int>count1;
            for(int i = 0;i<nums.size();i++){
                 count = 0;
                 int temp = nums[i];
                while(temp!=0){
                   if(temp%2==1){
                    count++;
                   }
                   temp=temp/2;
                }
               count1.push_back(count);
            }

       for(int i = 0;i<nums.size();i++){
        for(int j  = 0 ;j<nums.size()-i-1;j++){
            if(count1[j]==count1[j+1] && nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
       }
       return check_sorted(nums);
    }
};