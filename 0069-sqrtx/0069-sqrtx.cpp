class Solution {
public:
    int mySqrt(int x) {
        long num = x;
        long start = 1;
        long end = x;
        long mid;
        long ans =0;
        while(start<=end){
          mid = start +(end-start)/2;
          if((mid*mid)<=num){
             ans = mid;
             start = mid+1;
          }
          else{
            end = mid-1;
          }
        }
        return ans;
    }
};