class Solution {
public:
bool dfs(vector<vector<int>>&v,vector<int>&vis,int node){
    vis[node]=2;
    for(auto i:v[node]){
        if(!vis[i]){
            //cycle present
            if(dfs(v,vis,i)==true)return true;
        }
        //visited but present in stack so cycle is present
        else if(vis[i]==2)return true;
    }
    vis[node]=1;
    return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>v(numCourses);
        for(int i = 0;i<prerequisites.size();i++){
            v[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int>vis(numCourses,0);
        for(int i = 0;i<numCourses;i++){
           if(vis[i]==1)continue;
            if(dfs(v,vis,i)==true)return false;
        }
        return true;
    }
};