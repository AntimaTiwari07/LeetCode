class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>v(numCourses);
        for(int i = 0;i<prerequisites.size();i++){
            v[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        //indegree find
        vector<int>degree(numCourses,0);
        for(int i = 0;i<v.size();i++){
           for(int j = 0;j<v[i].size();j++){
            degree[v[i][j]]++;
           }
        }
        //jiski indegree 0 he usko queue me daal do
        queue<int>q;
        for(int i = 0;i<degree.size();i++){
            if(degree[i]==0)q.push(i);
        }
        int cnt = 0;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            cnt+=1;
            for(auto i:v[x]){
                degree[i]--;
                if(degree[i]==0)q.push(i);
            }
        }
        if(cnt!=numCourses)return false;
        return true;
    }
};