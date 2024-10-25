class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1){return true;}
        long long start  = 1;
        long long end = num/2;
        long long mid;
        while(start<=end){
            mid = start + (end-start)/2;
            if(num/mid==mid && num%mid==0){
                return true;
            }
            else if(num/mid < mid){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return false;
    }
};