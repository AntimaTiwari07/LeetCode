class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxi = 0;
        for(int i = 0;i<=nums.size()-3;i++){
           for(int j = i+1;j<=nums.size()-2;j++){
             long long diff = (nums[i]-nums[j]);
             long long ans = 0;
            for(int k = j+1;k<=nums.size()-1;k++){        
                 if(diff>0) {
                      ans = diff *nums[k];
                 }
                if(ans>maxi){
                    maxi = ans;
                }
            }
           }
        }
           return maxi;
    }
};