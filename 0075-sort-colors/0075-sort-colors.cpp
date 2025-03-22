class Solution {
public:
    void sortColors(vector<int>& nums) {
      int count0 = 0;
      int count1 = 0;
      int count2 = 0;
      for(int i = 0;i<nums.size();i++){
        if(nums[i]==0)count0+=1;
        else if(nums[i]==1)count1+=1;
        else count2+=2;
      }
      int k = 0;
        for(int i = 0;i<count0 && k<nums.size();i++){
            nums[k]=0;
            k++;
        }
        for(int i = 0;k<nums.size()&&i<count1;i++){
            nums[k]=1;
            k++;
        }
        for(int i = 0;k<nums.size()&& i<count2;i++){
            nums[k]=2;
            k++;
        }
    }
};