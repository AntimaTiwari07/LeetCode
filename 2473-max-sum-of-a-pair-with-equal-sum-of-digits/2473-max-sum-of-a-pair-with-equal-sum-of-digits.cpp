class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<vector<int>>v;
        for(int i =0;i<nums.size();i++){
            int x = nums[i];
            int digit = 0;
            while(x!=0){
                digit+=(x%10);
                x=x/10;
            }
            v.push_back({digit,nums[i]});
        }
        int maxi = -1;
        sort(v.begin(),v.end());
        for(int i = v.size()-1;i>0;i--){
            if(v[i][0]==v[i-1][0]){
                maxi = max(maxi,v[i][1]+v[i-1][1]);
            }
        }
        return maxi;
    }
};