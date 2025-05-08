class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        sort(worker.begin(),worker.end());
        unordered_map<int,int>mp;
        for(int i = 0;i<profit.size();i++){
            if(mp[profit[i]]>0)  mp[profit[i]] = min(mp[profit[i]],difficulty[i]);
           else mp[profit[i]]=difficulty[i];
        }
        priority_queue<int>pq;
        for(int i = 0;i<profit.size();i++){
            pq.push(profit[i]);
        }
        int ans = 0;
         int size = 0;
         int curr_idx = worker.size();
        while(!pq.empty() && size<worker.size()){
            int maxprofit = pq.top();
            pq.pop();
            int st = 0;
            int end = worker.size()-1;
            int mid ;
            int diffi = mp[maxprofit];
            int idx = -1;
            while(st<=end){
                mid = st+(end-st)/2;
                if(worker[mid]>=diffi){
                    idx = mid;
                    end = mid-1;
                }
                else{
                    st = mid+1;
                }
            }
            if(idx!=-1 && idx<curr_idx){
                ans+=(maxprofit*(worker.size()-idx-size));
                size = worker.size()-idx;
               curr_idx = idx;
             
            }
        }
        return ans;
    }
};