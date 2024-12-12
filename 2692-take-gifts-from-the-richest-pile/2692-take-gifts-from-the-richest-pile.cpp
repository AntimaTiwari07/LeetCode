class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long remgifts = 0;
        int second = k;
        int maxnum = INT_MIN;
       for(int i = 0;i<second;i++){
        maxnum = INT_MIN;
        int idx = -1;
        for(int j = 0;j<gifts.size();j++){
            if(gifts[j]>maxnum){
             maxnum = gifts[j];
             idx = j;
            }
        }
        gifts[idx]  = sqrt(maxnum);
       }
       for(int i = 0;i<gifts.size();i++){
        cout<<gifts[i]<<" ";
        remgifts+=gifts[i];
       }
       return remgifts;
    }
};