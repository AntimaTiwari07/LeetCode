class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int x = nums[nums.size()-1]-nums[0];
        int st = 0;
        int end = x;
        int mid;
        int ans = 0;
        while(st<=end){
            mid = st+(end-st)/2;
            int i = 0;
            int pairs =0;
            for(int j = 0;j<nums.size();j++){
                while(abs(nums[i]-nums[j])>mid){
                    i++;
                }
                pairs+=(j-i);
            }
            if(pairs>=k){
              ans = mid;
              end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
       return ans;
    }
};