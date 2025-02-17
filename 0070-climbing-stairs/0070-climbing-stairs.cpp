class Solution {
public:
 long long combination(int n,int r){
    if(r>n || r<0)return 0;
    if(r==0 || r==n)return 1;
    long long res = 1;
    r = min(r,n-r);
    for(int i = 0;i<r;i++){
        res = res*(n-i)/(i+1);
    }
    return res;
 }
    int climbStairs(int n) {
     int rem = n;
     int sum = 0;
     int count  = 0;
     int size= 0;
     while(rem>1){
       rem = rem-2;
       count+=1;
       size = rem+count;
      sum = sum + combination(size,rem) * combination(size-rem,count);
     }
     return sum+1;
    }
};