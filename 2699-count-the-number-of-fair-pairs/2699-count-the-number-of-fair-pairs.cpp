class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        long long count = 0;
        int n = nums.size();
        for(int i = 0;i<n-1;i++){
            int st = i+1;
            int end = n-1;
            //minele
            int upp = upper-nums[i];
            int low = lower-nums[i];
            int minidx= -1;
            int mid;
            while(st<=end){
                mid = st+(end-st)/2;
              if(nums[mid]>=low){
                minidx = mid;
                end = mid-1;
              }
              else{
                st = mid+1;
              }
            }
            st = i+1;
            end = n-1;
            int maxidx = -1;
            while(st<=end){
                mid = st+(end-st)/2;
            if(nums[mid]<=upp){
            maxidx = mid;
            st = mid+1;
            }
            else{
                end = mid-1;
            }
            }
            cout<<maxidx<<" "<<minidx<<endl;
         if(maxidx!=-1 && minidx!=-1)count = count+ (maxidx-minidx+1);
            }
        return count;
    }
};