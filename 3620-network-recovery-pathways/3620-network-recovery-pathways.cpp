class Solution {
public:
bool path( unordered_map<int,vector<pair<int,int>>>&mp,int &mid,int &size,long long &k){
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>q;
    q.push({0,0});
    vector<long long>v(size,LLONG_MAX);
    v[0] = 0;
    while(!q.empty()){
        pair<long long,long long>p= q.top();
        q.pop();
        long long cost = p.first, node = p.second;
        if(cost>v[node])continue;
               for(auto [next,w]:mp[node]){

            if(cost+w<v[next] && w>=mid){

                v[next]=cost+w;

                q.push({v[next],next});
            }
        }
    }
  
    if(v[size-1]<=k)return true;
    return false;
}
    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        unordered_map<int,vector<pair<int,int>>>mp;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int nodes = online.size();
        for(int i = 0;i<edges.size();i++){
            if(online[edges[i][0]] && online[edges[i][1]]){
                mp[edges[i][0]].push_back({edges[i][1],edges[i][2]});
                mini = min(mini,edges[i][2]);
                maxi = max(maxi,edges[i][2]);
            }
        }
        int st = mini;
        int end = maxi;
        if(st==INT_MAX || end ==INT_MIN)return -1;
        int mid;
        int ans =-1;
        while(st<=end){
            mid = st+(end-st)/2;
            if(path(mp,mid,nodes,k)){
                ans = mid;
                st = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return ans;
    }
};