class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>v;
        for(int i = 0;i<nums.size()-k+1;i++){
            bool valid = true;
            for(int j = 0;j<k-1;j++){
                if(nums[i+j]!=nums[i+j+1]-1){
                      v.push_back(-1);
                      valid = false;
                      break;
                }
                else{
                    valid = true;
                }
            }
            if(valid){
                v.push_back(nums[i+k-1]);
            }
        }
        return v;
    }
};