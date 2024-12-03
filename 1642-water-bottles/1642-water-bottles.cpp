class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int count = 0;
       int bottle = numBottles;
       while(bottle>=numExchange){
        int ans = bottle/numExchange;
         count+=ans;
        bottle = ans + bottle%numExchange;
       }
       return count+numBottles;
    }
};