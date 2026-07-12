class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       unordered_map<int,int>mp;
       for(int i = 0;i<arr.size();i++){
        mp[i] = arr[i];
       }
       int cnt = 1;
       sort(arr.begin(),arr.end());
       unordered_map<int,int>rank;
       for(int i = 0;i<arr.size();i++){
        if(rank[arr[i]]==0){
            rank[arr[i]] = cnt;
            cnt+=1;
        }
       }
       vector<int>ans(arr.size());
       for(int i= 0;i<arr.size();i++){
         ans[i] = rank[mp[i]];
       }
      return ans;
    }
};