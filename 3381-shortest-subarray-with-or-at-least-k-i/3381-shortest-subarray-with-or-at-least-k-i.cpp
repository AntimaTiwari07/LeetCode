class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int size =INT_MAX;
        int ans = 0;
       for(int i = 0;i<nums.size();i++){
        ans = 0;
        for(int j = i;j<nums.size();j++){
            ans = ans|nums[j];
            if(ans>=k){
              size = min(size,(j-i+1));
              cout<<size<<endl;
            }
        }
       }
       if(size!=INT_MAX){
        return size;
       }
       return -1;
    }
};