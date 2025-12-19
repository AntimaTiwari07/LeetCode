class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(edges.size()==0)return {0};
        vector<vector<int>>v(edges.size()+1);
        for(int i = 0;i<edges.size();i++){
            v[edges[i][0]].push_back(edges[i][1]);
             v[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int>q;
        vector<int>degree;
        for(int i = 0;i<v.size();i++){
            degree.push_back(v[i].size());
        }
        for(int i = 0;i<v.size();i++){
            if(degree[i]==1)q.push(i);
        }
        int cnt = v.size();
        while(cnt>2){
            int size = q.size();
            cnt-=size;
            for(int i =0;i<size;i++){
                int x= q.front();
                q.pop();
                for(auto j:v[x]){
                    degree[j]-=1;
                    if(degree[j]==1){
                        q.push(j);
                    }
                }
            }
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};