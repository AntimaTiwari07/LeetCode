class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<vector<int>>v(n);
        vector<int>reach(n,0);
        for(int i = 0;i<edges.size();i++){
            v[edges[i][0]].push_back(edges[i][1]);
            reach[edges[i][1]]=1;
        }
        vector<int>ans;
        for(int i = 0;i<n;i++){
            if(reach[i]==0)ans.push_back(i);
        }
        return ans;
    }
};