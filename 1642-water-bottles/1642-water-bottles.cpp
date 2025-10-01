class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum = numBottles;
        int div =numBottles ,rem = 0;
        while(div!=0){
            div = numBottles/numExchange;
            rem = numBottles%numExchange;
            sum+=div;
            numBottles = div+rem;
        }
        return sum;
    }
};