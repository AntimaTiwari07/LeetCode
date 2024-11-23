class Solution {
public:
    bool canAliceWin(int n) {
        int count = 1;
        if(n<10){
            return false;
        }
        int k = 9;
        n=n-10;
       while(n>=k ){
        count++;
        n = n-k;
        k--;
       }
       if(count%2==0){
        return false;
       }
       return true;
    }
};