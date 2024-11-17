class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int  i= 0;i<k;i++){
           sum+=nums[i];
        }
        double maxavg = double(sum/k);
        double count  = sum;
        double avg ;
        for(int i = 1;i<=nums.size()-k;i++){
        count = (count-nums[i-1]+nums[i+k-1]);
         avg = double(count/k);
            if(avg>maxavg){
                maxavg = avg;
            }
        }
        return maxavg;
    }
};