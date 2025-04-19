class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int count = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-1;i++){
            int st = i+1;
            int end = n-1;
            int mid;
            int y = nums[i]-k;
            int yy = nums[i]+k;
           while(st<=end){
            mid = st+(end-st)/2;
            if(nums[mid]==y ){
                count+=mp[nums[mid]];
               break;
            }
            else if(nums[mid]<y){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
           }
           st = i+1;
           end = n-1;
           while(st<=end){
             mid = st+(end-st)/2;
            if(nums[mid]==yy ){
                count+=mp[nums[mid]];
               break;
            }
            else if(nums[mid]<yy){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
           }
        }
        return count;
    }
};