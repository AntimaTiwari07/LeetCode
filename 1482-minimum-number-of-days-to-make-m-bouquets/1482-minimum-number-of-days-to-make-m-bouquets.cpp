class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long maxday =INT_MIN,minday = INT_MAX;
        for(int i = 0;i<bloomDay.size();i++){
            maxday = max((int)maxday,bloomDay[i]);
            minday = min((int)minday,bloomDay[i]);
        }
        long long st = minday;
        long long end = maxday;
        long long mid ;
        long long ans = -1;
        
        while(st<=end){
           mid = st+(end-st)/2;
           int cnt = 0;
           int bok = 0;
           for(int i = 0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                cnt+=1;
            }
            else cnt = 0;
            if(cnt==k){
                bok+=1;
                cnt = 0;
            }
           }
           if(bok>=m){
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