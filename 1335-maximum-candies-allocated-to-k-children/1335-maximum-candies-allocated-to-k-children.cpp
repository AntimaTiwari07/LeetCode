class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        if(candies.size()==1&&candies[0]==k) return 1;
        if(candies.size()==1 && candies[0]>=k) return candies[0]/k;
        
        
     sort(candies.begin(),candies.end());
     int high = candies[candies.size()-1];
     int low = 1;
     int mid;
     int ans = 0;
     while(low<=high){
        mid = low+(high-low)/2;
        long long piles = 0;
        for(int i = 0;i<candies.size();i++){
            piles+=candies[i]/mid;
        }
        if(piles>=k){
         ans = mid;
         low = mid+1;
        }
        else{
            high = mid-1;
        }
       
     } 
     return ans;
    }
};