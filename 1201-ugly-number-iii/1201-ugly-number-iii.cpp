class Solution {
public:
long long lowervalues(long long mid,int a,int b,int c){
    long long llm1 = (long long)a*b/gcd(a,b); //a ^ b
    long long llm2 = (long long)a*c/gcd(a,c); //a^c
    long long llm3 = (long long)b*c/gcd(b,c); //b^c
    long long llm4 = (long long)llm1*c/gcd(llm1,c);
    return (mid/a)+(mid/b)+(mid/c) - (mid/llm1)-(mid/llm2)-(mid/llm3) + (mid/llm4);
}
    int nthUglyNumber(int n, int a, int b, int c) {
       long long st = min({a,b,c});
       long long end = (long long)max({a,b,c})*n;
       long long mid;
       long long ans;
       while(st<=end){
        mid = st+(end-st)/2;
        long long p = lowervalues(mid,a,b,c);
        if(p>=n){
            ans = mid;
            end = mid-1;
        }
        else st = mid+1;
       }  
       return (int)ans;
    }
};