class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_sum = INT_MIN;
        int curr = 0;
        for(int i = 0;i<nums.size();i++){
             curr += nums[i];
            if(curr>=0){
            max_sum = max(max_sum,curr);
            }
            else{
                curr = 0;
            }
        }
         int min_sum = INT_MIN;
            curr = 0;
         for(int i = 0;i<nums.size();i++){
             curr += nums[i];
            if(curr<=0){
            min_sum = max(min_sum,abs(curr));
            }
            else{
                curr = 0;
            }
        }
        cout<<min_sum<<" "<<max_sum<<endl;
           return max(min_sum,max_sum);
    }
};