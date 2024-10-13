class Solution {
public:
long long power(long long x,long long n){
    //base case
    if(n==0){
        return 1;
    }
    int const mod = 1000000007;
    long long ans = power(x,n/2);
      ans = (ans*ans)%mod;
    if(n%2!=0){
        ans = (ans*x)%mod;
    }
    return ans;
}
    int countGoodNumbers(long long n) {
       long long even = n/2+n%2;
       long long odd = n/2;
       return (power(5,even)%1000000007*power(4,odd)%1000000007);
    }
};