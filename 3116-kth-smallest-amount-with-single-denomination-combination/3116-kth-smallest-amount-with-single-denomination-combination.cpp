class Solution {
public:
long long position(long long n,vector<int>&coins){
    long long duplicate = 0;
    for(int x = 1;x<=(1<<coins.size())-1;x++){
        long long cnt = 0;
        long long llm = 0;
        for(int j =0;j<coins.size();j++){
            if(x&(1<<j)){
                cnt+=1;
                if(llm ==0){
                    llm= coins[j];
                }
                else{
                    llm = (llm*coins[j])/gcd(llm,coins[j]);
                }
            }
        }
        if(cnt%2==0){
            duplicate-=(n/llm);
        }
        else duplicate+=(n/llm);
    }
    return duplicate;
}
    long long findKthSmallest(vector<int>& coins, int k) {
        sort(coins.begin(),coins.end());
       long long st = coins[0];
       long long end = (long long)coins.back()*k;
       long long mid;
       long long ans ;
       while(st<=end){
        mid = st+(end-st)/2;
        long long p = position(mid,coins);
        if(p>=k){
            cout<<p<<" "<<mid<<endl;
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
       } 
       return ans;
    }
};