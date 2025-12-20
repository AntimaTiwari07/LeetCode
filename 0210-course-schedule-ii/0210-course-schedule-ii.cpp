class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>v(numCourses);
        for(int i = 0;i<prerequisites.size();i++){
            v[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int>degree(numCourses,0);
        for(int i = 0;i<v.size();i++){
            for(int j = 0;j<v[i].size();j++){
                degree[v[i][j]]++;
            }
        }
        queue<int>q;
        vector<int>ans;
        for(int i = 0;i<degree.size();i++){
            if(degree[i]==0)q.push(i);
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto i:v[node]){
                degree[i]--;
                if(degree[i]==0)q.push(i);
            }
        }
        if(ans.size()==numCourses)return ans;
        return {};
    }
};