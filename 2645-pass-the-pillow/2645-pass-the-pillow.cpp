class Solution {
public:
    int passThePillow(int n, int time) {
        int t = 1;
        int p = 1;
      while(t!=(time+1)){
        if(p==n){
            while(t!=(time+1)&&p!=1){
                t+=1;
                p-=1;
            }
        }
        else{
            t+=1;
            p+=1;
        }
      }
       return p;
    }
};