class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       priority_queue<long long,vector<long long>,greater<long>>pq;
       for(int i = 0;i<nums.size();i++){
        if(nums[i]<k) pq.push(nums[i]);
       }
       long long x = 0;
       long long y =0;
       int op = 0;
       while(!pq.empty() && pq.size()>=2){
        if(pq.top()>=k)pq.pop();
        else {
            x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        long long temp = min(x,y)*2+max(x,y);
        pq.push(temp);
        op+=1;
        }
       }
       if(pq.size()==1 && pq.top()<k)return op+1;
       return op;
    }
};