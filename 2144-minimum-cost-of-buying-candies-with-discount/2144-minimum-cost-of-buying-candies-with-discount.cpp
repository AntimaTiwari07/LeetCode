class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size()==1)return cost[0];
        if(cost.size()==2)return cost[0]+cost[1];
        sort(cost.begin(),cost.end());
        int cnt = 0;
        for(int i =cost.size()-1;i>=0;i-=3){
               if(i-1>=0) cnt = cnt+cost[i]+cost[i-1];
               else cnt += cost[i];
            
        }
        return cnt;
    }
};