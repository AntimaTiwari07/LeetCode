class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int>pq;
       for(int i = 0;i<piles.size();i++){
        pq.push(piles[i]);
       }
       while(k!=0){
        int max = pq.top();
        cout<<max<<endl;
          pq.pop();
          pq.push(max-(int)max/2);
          k--;
       }
       vector<int>v;
       while(!pq.empty()){
         v.push_back(pq.top());
         pq.pop();
       }
       int sum = 0;
       for(int i = 0;i<v.size();i++){
        sum+=v[i];
       }
       return sum; 
    }
};