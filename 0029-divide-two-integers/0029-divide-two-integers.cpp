class Solution {
public:
    int divide(int dividend, int divisor) {
       
        long long count = 0;
        long long sum = 0;
        int sign = 1;
        long long divi = dividend;
        long long divisorr = divisor;
        if(divisorr == -1 && divi ==INT_MIN)return INT_MAX;
        if(divisorr<0 && divi<0){divisorr = -divisorr;divi= -divi;}
        else if(divisorr <0) {sign = -1;divisorr = -divisorr;}
        else if (divi <0){sign = -1;divi = -divi;}
        else sign = 1;
         if(divisorr == 1 || divisorr == -1)return sign*divi;
        while(sum <= divi){
           sum+=divisorr;
           count+=1;
        }
        count -=1;
        count = count*sign;
        if(count<=INT_MIN)return INT_MIN;
        else if(count>=INT_MAX)return INT_MAX;
        return count;

    }
};