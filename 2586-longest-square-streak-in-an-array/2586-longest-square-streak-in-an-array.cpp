class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int ans1 = 0;
         int cnt = 1;
         sort(nums.begin(),nums.end());
          int n = nums[0];
          bool found = false;
       for(int i = 0;i<nums.size()-1;i++){
          int st = 0;
          int end = nums.size()-1;
          int mid ;
          while(st<=end){
            mid = st +(end-st)/2;
            if(nums[mid]==pow(n,2)){
                n = nums[mid];
                found = true;
                cnt = cnt+1;
                break;
            }
            else if(nums[mid]<pow(n,2)){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
          }
          ans1 = max(ans1,cnt);
          if(found==false){
            n = nums[i+1];
          }
          
       }
       if(ans1==1){
        return -1;
       }
       //return ans;
       //for n = 1
         int ans2 = 0;
         int cnt2 = 1;
         sort(nums.begin(),nums.end());
          int n2= nums[1];
          bool found2= false;
       for(int i = 0;i<nums.size()-1;i++){
          int st = 0;
          int end = nums.size()-1;
          int mid ;
          while(st<=end){
            mid = st +(end-st)/2;
            if(nums[mid]==pow(n2,2)){
                n2 = nums[mid];
                found2 = true;
                cnt2 = cnt2+1;
                break;
            }
            else if(nums[mid]<pow(n2,2)){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
          }
          ans2 = max(ans2,cnt2);
          if(found2==false){
            n2 = nums[i+1];
          }
          
       }
       cout<<ans1<<" "<<ans2<<endl;
       return max(ans1,ans2);
    }
};