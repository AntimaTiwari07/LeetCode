class Solution {
public:
    int totalMoney(int n) {
      int ans = 0;
      int cnt = 0;
      while(n!=0) {
        if(n<7){
            for(int i = 1;i<=n;i++){
                ans = ans+i+cnt;
            }
       
            n= 0;
        }
        else{
            for(int i = 1;i<=7;i++){
                ans = ans+ i +cnt;
            }
           
            n-=7;
        }
        cnt+=1;
       
      } 
      return ans;
    }
};