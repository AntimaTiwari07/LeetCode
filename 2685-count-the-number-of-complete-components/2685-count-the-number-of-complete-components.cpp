class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<bool>vis(n,false);
        unordered_map<int,vector<int>>mp;
        for(int i = 0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
         int ans = 0;
        for(int i = 0;i<n;i++){
            if(!vis[i]){
                queue<int>q;
                q.push(i);
                vis[i] = true;
                int nodes = 0;
                int edge = 0;
                while(!q.empty()){
                    int x = q.front();
                    nodes+=1;
                    q.pop();
                    for(auto j:mp[x]){
                         edge+=1;
                        if(!vis[j]){
                            vis[j] = true;
                            q.push(j);
                        }
                    }
                }
                if(nodes==1 && edge == 0)ans+=1;
                else if(nodes==2 && edge==2)ans+=1;
                else if(2*(nodes*(nodes-1)/2)==edge)ans+=1;
            }
        }
        return ans;
    }
};