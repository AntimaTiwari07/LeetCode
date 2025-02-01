class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int count = 0;
        int i = 0;
        while(i<nums.size()-1){
            count+=1;
            int maxi = INT_MIN;
            int idx = -1;
            if((nums[0])>=(nums.size()-1))return count;
            else{
                for(int j = i+1;j<nums.size()&&j<=nums[i]+i;j++){
                 if(maxi<=(nums[j]+j)){
                    maxi = nums[j]+j;
                    idx = j;
                }
            }
            }
            if(maxi>=nums.size()-1){
                count+=1;
                return count;
            }
             else
                i = idx;
        }
        return count;
    }
};