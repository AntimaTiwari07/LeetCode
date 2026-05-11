class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        string temp = "";
        for(int i = 0;i<nums.size();i++){
            temp = temp + to_string(nums[i]);
        }
        for(int i = 0;i<temp.size();i++){
            ans.push_back((int)temp[i]-'0');
        }
        return ans;
    }
};