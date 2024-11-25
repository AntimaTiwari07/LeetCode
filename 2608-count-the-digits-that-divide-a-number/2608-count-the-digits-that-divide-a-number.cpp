class Solution {
public:
    int countDigits(int num) {
        int x = num;
        int count = 0;
        while(num!=0){
            if(x%(num%10)==0){
                count++;
            }
            num = num/10;
        }
        return count;
    }
};