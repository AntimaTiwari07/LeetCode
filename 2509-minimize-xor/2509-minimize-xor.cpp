class Solution {
public:
    int minimizeXor(int num1, int num2) {
      //find number of bit
      int count = 0;
      int x = num2;
      vector<int>v(32,0);
      while(x!=0){
       count+=(x%2);
       x=x/2;
          }
          cout<<"set bit in num2 = "<<count<<endl;
          int y = num1;
          int cnt = 0;
          int idx = 31;
          while(y!=0){
            v[idx] = y%2;
       cnt+=(y%2);
       y=y/2;
       idx--;
          }
          cout<<"set bit in num1 = "<<cnt<<endl;
          for(int i= 0;i<v.size();i++)cout<<v[i]<<" ";
          if(cnt == count) return num1;
         else if(cnt<count){
            int diff = count-cnt;
          for(int i = 31;i>=0&&diff>0;i--){
            if(v[i]==0){v[i]=1;
            diff--;
            }
          }
            }
         else{
            int diff = cnt-count;
            for(int i = 31;i>=0&&diff>0;i--){
            if(v[i]==1){v[i]=0;
            diff--;
            }
          }
         }
         cout<<endl;
          for(int i= 0;i<v.size();i++)cout<<v[i]<<" ";
         int number = 0;
         for(int i = 31,k = 0;i>=0;i--){
            number+=v[i]*pow(2,k);
            k++;
         }
          return number;
    }
};