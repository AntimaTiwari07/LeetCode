class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,w=0,b=0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0)r++;
            else if(nums[i]==1)w++;
            else b++;
        }
        int i =0;
        int j = 0;
        while(i<r){nums[i] = 0;i++;}
        j = i;
        while(i<w+j){nums[i] = 1;i++;}
        j = i;
        while(i<b+j){nums[i] = 2;i++;}
    }
};