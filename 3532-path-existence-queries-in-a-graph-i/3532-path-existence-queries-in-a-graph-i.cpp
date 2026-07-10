class DSU{
     vector<int>parent;
    public:
   
    DSU(int n){
        for(int i = 0;i<n;i++){
            parent.push_back(i);
        }
    }
    int find(int x){
        if(parent[x] == x){
            return x;
        }

        return parent[x] = find(parent[x]);
    }
    void merge(int x,int y){
        int x_parent = find(x);
        int y_parent = find(y);
        if(x_parent!=y_parent){
            parent[x_parent]=y_parent;
        }
    }
};
class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
       vector<pair<int,int>> v;

for(int i=0;i<n;i++)
    v.push_back({nums[i],i});
        DSU dsu(n);
        for(int i=1;i<n;i++){
    if(v[i].first-v[i-1].first<=maxDiff)
        dsu.merge(v[i].second,v[i-1].second);
}
        vector<bool>ans(queries.size(),false);
        for(int i = 0;i<queries.size();i++){
            if(dsu.find(queries[i][0])==dsu.find(queries[i][1]))ans[i] = true;      
        }
        return ans;
    }
};