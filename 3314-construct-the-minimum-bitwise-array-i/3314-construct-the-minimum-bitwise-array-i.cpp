class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        for(int i = 0;i<ans.size();i++){
            for(int j = 1;j<=nums[i];j++){
                if((j|(j+1))==nums[i]){
                    ans[i] = j;
                    break;
                }
            }
            cout<<endl;
        }
        return ans;
    }
};