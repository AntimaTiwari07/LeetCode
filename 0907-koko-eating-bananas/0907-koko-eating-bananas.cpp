class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
       long s = 1;
       long e =  piles[piles.size()-1];
       long mid ;
       long ans = 0;
       while(s<=e){
        mid = s +(e-s)/2;
         long hour =0;
    for(int i = 0;i<piles.size();i++){
        
            if(piles[i]%mid==0){
               hour = hour + piles[i]/mid;
            }
            else{
                hour = hour + piles[i]/mid + 1;
            }
        }
        if(hour<=h){
          ans = mid;
          e = mid -1;
        }
        else {
           s = mid+1;
        }
       }
       return ans;
    }
};