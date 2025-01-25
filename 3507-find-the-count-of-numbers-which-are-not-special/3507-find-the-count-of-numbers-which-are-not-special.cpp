class Solution {
public:
bool isprime(int n){
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
    int nonSpecialCount(int l, int r) {
        int special = 0;
      for(int i = sqrt(l);i<=sqrt(r);i++){
        int x = i;
        if(x!=1 && isprime(x)){
            if((x*x)>=l && (x*x)<=r)special+=1;
        }
      }
    return (r-l+1-special);
    }
};