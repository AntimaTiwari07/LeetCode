class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>nums;
        for(int i = 1;i<=n;i++){
            nums.push_back(i);
        }
        int idx = 0;
        k--;
        while(nums.size()>1){
           idx = (idx+k)%nums.size();
           nums.erase(nums.begin()+idx);
        }
        return nums[0];
    }
};