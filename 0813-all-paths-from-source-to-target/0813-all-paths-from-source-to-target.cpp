class Solution {
public:
void dfs(unordered_map<int,vector<int>>&mp,vector<int>&temp,vector<vector<int>>&ans,int src,int target){
    if(src==target){
        temp.push_back(src);
        ans.push_back(temp);
        temp.pop_back();
        return;
    }
    temp.push_back(src);
    for(auto i:mp[src]){
        dfs(mp,temp,ans,i,target);
    }
    temp.pop_back();
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>mp;
        vector<int>temp;
        for(int i= 0;i<graph.size();i++){
            for(int j = 0;j<graph[i].size();j++){
                mp[i].push_back(graph[i][j]);
            }
        }
      dfs(mp,temp,ans,0,graph.size()-1);
      return ans;
    }
};