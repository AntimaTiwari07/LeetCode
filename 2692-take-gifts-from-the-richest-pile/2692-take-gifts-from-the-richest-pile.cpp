class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long remgifts = 0;
        /*
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
       */
       priority_queue<int>v;
       int second = k;
       for(int i = 0;i<gifts.size();i++){
        v.push(gifts[i]);
       }
       for(int i = 1;i<=second;i++){
        int top = v.top();
        v.pop();
            v.push(sqrt(top));
       }
       while(!v.empty()){
        remgifts+=v.top();
        v.pop();
        
       }
       return remgifts;
    }
};