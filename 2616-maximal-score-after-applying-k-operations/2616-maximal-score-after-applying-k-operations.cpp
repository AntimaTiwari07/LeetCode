class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int i = 0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        long long score = 0;
        while(k!=0){
            int max = pq.top();
             score+=max;
             pq.pop();
             if(max%3==0){
                pq.push((int)max/3);
             }
             else{
                 pq.push((int)max/3+1);
             }
             k--;
        }
       return score;
    }
};