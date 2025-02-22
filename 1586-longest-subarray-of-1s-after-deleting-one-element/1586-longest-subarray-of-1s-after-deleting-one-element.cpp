class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<vector<int>>v;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
              count+=1;
            }
            else{
                v.push_back({count,i});
                count = 0;
            }
        }
        if(v.size()>0 &&count!=0){v.push_back({count,-1});}
        if(v.size()>1){
            int maxi = 0;
            int idx = -1;
       for(int i = 0;i<v.size()-1;i++){
                if(v[i][0]+v[i+1][0]>=maxi){
                    maxi = v[i][0]+v[i+1][0];
                    idx = v[i][1];
                }
            }
              nums.erase(nums.begin()+idx);
        }
        else if(v.size()==1){
            nums.erase(nums.begin()+v[0][1]);
        }
        else nums.erase(nums.begin()+0);
         int cnt = 0;
         int maxi = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==1){
                cnt+=1;
            }
            else{
                maxi = max(maxi,cnt);
                cnt = 0;
            }
        }
        if(cnt>maxi)maxi = max(maxi,cnt);
        return maxi;
    }
};