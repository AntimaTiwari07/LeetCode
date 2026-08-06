class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n;i<=100;i++){
            int mul = 1;
            int num = i;
            while(num!=0){
                mul*=(num%10);
                num/=10;
            }
            if(mul%t==0)return i;
        }
        return n;
    }
};