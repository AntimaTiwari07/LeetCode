class Solution {
public:
    int mySqrt(int x) {
        long num = x;
        long start = 1;
        long end = x/2;
        long mid;
        long ans =0;
        if(x==1) return 1;
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