class Solution {
public:
    bool canAliceWin(int n) {
        int flag = 1; //alice 
        int x = 10;
        while(n>0){
          if(n>=x){
            flag = 1-flag;//bob
            n-=x;
            x--;
          }
          else break;
        }
        return 1-flag;
    }
};