class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int size = 0;
        if(nums.size()==1)return 1;
        if(nums.size()==2)return 2;
        size = nums.size();
        int len = 0;
        while(size!=0){
          len+=1;
          size/=2;
        }
        int maxi = pow(2,len)-1;
        return maxi+1;
    }
};