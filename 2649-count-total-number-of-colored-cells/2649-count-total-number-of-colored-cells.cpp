class Solution {
public:
    long long coloredCells(int n) {
        long long sum = 1;
       while(n!=1){
        sum+=(n-1)*4;
        n-=1;
       }
       return sum;
    }
};