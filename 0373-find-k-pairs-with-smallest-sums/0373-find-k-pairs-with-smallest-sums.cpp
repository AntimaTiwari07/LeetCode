class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>v;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
     unordered_map<string,int>mp;
        q.push({nums1[0]+nums2[0],{0,0}});
        string s = to_string(0)+" "+to_string(0);
        while(k>0){
            pair<int,pair<int,int>>p = q.top();
            q.pop();
            k--;
            pair<int,int>x = p.second;
            v.push_back({nums1[x.first],nums2[x.second]});
            s = to_string(x.first)+" "+to_string(x.second+1);
            if(x.second+1<nums2.size() && mp[s]==0 ){
                q.push({nums1[x.first]+nums2[x.second+1],{x.first,x.second+1}});
                mp[s]++;
            }
            s = to_string(x.first+1)+" "+to_string(x.second);
           if(x.first+1<nums1.size() && mp[s]==0 ){ 
            q.push({nums1[x.first+1]+nums2[x.second],{x.first+1,x.second}});
            mp[s]++;
        }
        }
        return v;
    }
};