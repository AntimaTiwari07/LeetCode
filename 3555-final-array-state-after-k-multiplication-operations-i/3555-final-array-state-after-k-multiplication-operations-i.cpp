class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        /*
        priority_queue<int,vector<int>,greater<int>>v;
        for(int i = 0;i<nums.size();i++){
            v.push(nums[i]);
        }
        int count = 0;
        while(count<k){
            int temp = v.top();
            v.pop();
            v.push(temp*multiplier);
            count++;
        }
    vector<int>ans;
    int top = 0;
    while(top!=v.size()){
        ans.push_back(v.top());
        top++;        
    }
    return ans;
    */
    int count = 0;
    int min = INT_MAX;
    while(count<k){
        min = nums[0];
        int idx = 0;
    for(int i = 0;i<nums.size();i++){
          if(nums[i]<min){
            min = nums[i];
            idx = i;
          }
    }
    nums[idx] = nums[idx]*multiplier;
    count++;
    }
    return nums;
    }

};