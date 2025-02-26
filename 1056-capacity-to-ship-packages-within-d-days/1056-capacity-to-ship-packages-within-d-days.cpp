class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int maxi = 0;
        for(int i = 0;i<weights.size();i++){
            sum+=weights[i];
            maxi = max(maxi,weights[i]);
        }
          int st = maxi;
          int end = sum;
          int mid;
          int ans = sum;
          int day;
          while(st<=end){
           mid = st+(end-st)/2;
           int cnt = 0;
            day = 0;
           for(int i = 0;i<weights.size();i++){
            cnt+=weights[i];
            if(cnt==mid){
                day+=1;
                cnt = 0;
            }
            else if(cnt>mid){
                day+=1;
                cnt = weights[i];
                if(cnt==mid){
                    day+=1;
                    cnt = 0;
                }
            }
           }
           if(cnt<=mid && cnt!=0)day+=1;
           if(day<=days){
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