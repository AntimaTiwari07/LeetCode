class Solution {
public:
bool dfs(vector<vector<int>>&v,vector<int>&vis,int node,vector<int>&dfsstack){
    vis[node]=1;
    dfsstack[node]=1;
    for(auto i:v[node]){
        if(!vis[i]){
            //cycle present
            if(dfs(v,vis,i,dfsstack)==true)return true;
        }
        //visited but present in stack so cycle is present
        else if(dfsstack[i]==1)return true;
    }
    dfsstack[node]=0;
    return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>v(numCourses);
        for(int i = 0;i<prerequisites.size();i++){
            v[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int>vis(numCourses,0);
         vector<int>dfsstack(numCourses);
        for(int i = 0;i<numCourses;i++){
           if(vis[i]==1)continue;
            if(dfs(v,vis,i,dfsstack)==true)return false;
        }
        return true;
    }
};