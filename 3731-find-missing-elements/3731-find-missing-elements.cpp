class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int smallest = 101;
        int largest = 0;
        unordered_map<int,int>mp;
        for(int i = 0;i<nums.size();i++){
            smallest = min(smallest,nums[i]);
            largest = max(largest,nums[i]);
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(int i = smallest;i<=largest;i++){
            if(mp.find(i)==mp.end())ans.push_back(i);
        }
       return ans;
    }
};