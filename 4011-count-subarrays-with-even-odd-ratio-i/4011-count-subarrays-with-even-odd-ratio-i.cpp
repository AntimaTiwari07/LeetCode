class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int ans  =0;
        vector<int>odd(nums.size(),0);
        vector<int>even(nums.size(),0);
        if (nums[0]%2==0)
        even[0] = 1;
        else odd[0] = 1;
        for(int i = 1;i<nums.size();i++){
            if(nums[i]%2==0)even[i] = even[i-1]+1;
            else even[i] = even[i-1];
            if(nums[i]%2!=0)odd[i]=odd[i-1]+1;
            else odd[i] = odd[i-1];
        }
        int x,y;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]%2!=0)ans+=1;
        }
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if(i==0){
                    x = even[j];
                    y = odd[j];
                }
                else{
                 x = even[j]-even[i-1];
                 y = odd[j]-odd[i-1];
                }

                if(y>0 && (x*b)<=(y*a))ans+=1; 
        }
        }
         return ans;
    }
};