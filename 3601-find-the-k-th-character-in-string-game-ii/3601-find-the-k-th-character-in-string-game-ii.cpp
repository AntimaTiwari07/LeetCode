class Solution {
public:
    char solve(long long n,long long k,vector<int>& operations){
        if(n==0){
            return 'a';
        }
       long long mid;
        if (n >= 64) {
            mid = LLONG_MAX;  // Any value beyond realistic index
        } else {
            mid = 1LL << (n - 1);  // Safe for n < 64
        }

        if(k<mid){
            return solve(n-1,k,operations);
        }
        else{
            cout<<operations[n-1]<<" "<<n-1<<endl;
             return (solve(n-1,k-mid,operations) -'a'+ operations[n-1])%26+'a';
        }
    }
 
    char kthCharacter(long long k, vector<int>& operations) {
      char ans = solve(operations.size(),k-1,operations);
      return ans;
       
    }
};