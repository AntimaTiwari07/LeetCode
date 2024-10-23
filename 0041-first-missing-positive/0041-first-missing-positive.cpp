class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         sort(nums.begin(),nums.end());
  bool count[100000] = {false};
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>0 && nums[i]<100000){
           count[nums[i]] = true;
            }
            else continue;
        }
        for(int i = 1;i<100000;i++){
            if(count[i]==false){
                return i;
            }
        }
        return nums[nums.size()-1]+1;
        
        /*
        sort(nums.begin(),nums.end());
        int  s = 1;
          int e = nums[nums.size()-1];
        int  mid ;
        bool check = false;
        int ans = 1;
        while(s<=e){
            mid = s+(e-s)/2;
            check = false;
            for(int i = 0;i<nums.size();i++){
                if(nums[i]==mid){
                   check = true;
                }
            }
            if(check == false){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
        */
        /*
       
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }
        return 1;
        */
    }
};