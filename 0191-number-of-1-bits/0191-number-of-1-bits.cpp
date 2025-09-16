class Solution {
public:
    int hammingWeight(int n) {
        int rem = 0;
        int cnt = 0;
        while(n!=0){
          rem = n%2;
          if(rem==1)cnt+=1;
          n/=2;      
        }
        return cnt;
    }
};