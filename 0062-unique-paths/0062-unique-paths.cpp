class Solution {
public:
long long fact(int x,int y){
    long long mul = 1;
   for(int i = 1;i<=y;i++){
        mul = mul*(x-i+1);
        mul/=i;
   }
   return mul;
}
    int uniquePaths(int m, int n) {
        m--;
        n--;
         if(m==0 && n==0)return 1;
        if(m==0 || n==0)return 1;
        
       int y = min(m,n);
        int ans = fact(m+n,y);
     return ans; 
    }
};