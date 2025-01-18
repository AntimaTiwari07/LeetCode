class Solution {
public:
    int minimizeXor(int num1, int num2) {
      //find number of bit
      int setbit_num2 = 0;
      int x = num2;
      vector<int>v(32,0);
      while(x!=0){
       setbit_num2+=(x%2);
       x=x/2;
          }
          int y = num1;
          int setbit_num1 = 0;
          int idx = 31;
          while(y!=0){
            v[idx] = y%2;
       setbit_num1+=(y%2);
       y=y/2;
       idx--;
          }
          if(setbit_num2 == setbit_num1) return num1;
         else if(setbit_num1<setbit_num2){
            int diff = setbit_num2-setbit_num1;
          for(int i = 31;i>=0&&diff>0;i--){
            if(v[i]==0){v[i]=1;
            diff--;
            }
          }
            }
         else{
            int diff = setbit_num1-setbit_num2;
            for(int i = 31;i>=0&&diff>0;i--){
            if(v[i]==1){v[i]=0;
            diff--;
            }
          }
         }
         int number = 0;
         for(int i = 31,k = 0;i>=0;i--){
            number+=v[i]*pow(2,k);
            k++;
         }
          return number;
    }
};