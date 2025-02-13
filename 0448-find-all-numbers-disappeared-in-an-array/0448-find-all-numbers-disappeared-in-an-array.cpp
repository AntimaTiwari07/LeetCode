class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
             vector<int>present(n+1,0);
             vector<int>v;
             for(int i = 0;i<nums.size();i++){
                present[nums[i]]++;
             }
             for(int i = 1;i<=n;i++){
                if(present[i]==0)v.push_back(i);
             }
             return v;
    }
};