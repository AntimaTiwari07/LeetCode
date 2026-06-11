class Solution {
public:
    int assignEdgeWeights(vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>mp;
        int maxnum = 1;
        for(int i = 0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
            maxnum = max({maxnum,edges[i][0],edges[i][1]});
        }
        queue<int>q;
        int depth = 0;
        q.push(1);
        q.push(-1);
        vector<int>vis(maxnum+1,0);
        vis[1] = 1;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            if(x==-1){
                depth+=1;
                if(!q.empty())q.push(-1);
            }
            else{
                for(int j = 0;j<mp[x].size();j++){
                if(vis[mp[x][j]]==0){
                    q.push(mp[x][j]);
                    vis[mp[x][j]] = 1;
                }
                }
            }
        }
        cout<<depth-1<<endl;
        depth-=2;
        long long res = 1;
        long long mod = 1000000007;
        while(depth!=0){
            res  = (res*2)%mod;
            depth-=1;
        }
        int ans = res;
        return ans;
    }
};