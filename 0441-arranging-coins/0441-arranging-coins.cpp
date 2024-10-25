class Solution {
public:
    int arrangeCoins(int n) {
        int s = 1;
        int end = n;
        int mid;
        long long x;
        while(s<=end){
            mid = s + (end-s)/2;
             x = (long long )mid*(mid+1)/2;
            if(x==n){
                return mid;
            }
            else if(x<n){
                s = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return end;
    }
};