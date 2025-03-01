class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i = 0;i<nums.size();i++){
                if(nums[i]==0){
                   count+=1;
                   nums.erase(nums.begin()+i);
                   i--;
                }
        }
        for(int i =1;i<=count;i++){
            nums.push_back(0);
        }
    }
};