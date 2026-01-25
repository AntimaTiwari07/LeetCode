class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>v;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
       vector<vector<int>>dp(nums1.size(),vector<int>(nums2.size(),0));
        q.push({nums1[0]+nums2[0],{0,0}});
        dp[0][0] = 1;
        while(k>0){
            pair<int,pair<int,int>>p = q.top();
            q.pop();
            k--;
            pair<int,int>x = p.second;
            v.push_back({nums1[x.first],nums2[x.second]});
            if(x.second+1<nums2.size() && dp[x.first][x.second+1] == 0){
                q.push({nums1[x.first]+nums2[x.second+1],{x.first,x.second+1}});
                dp[x.first][x.second+1] = 1;
            }
           if(x.first+1<nums1.size() && dp[x.first+1][x.second] ==0){ 
            q.push({nums1[x.first+1]+nums2[x.second],{x.first+1,x.second}});
            dp[x.first+1][x.second] = 1;
        }
        }
        return v;
    }
};