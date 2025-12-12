class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       queue<int>q;
       q.push(0);
       vector<int>vis(rooms.size(),false);
       while(!q.empty()){
        int key = q.front();
         q.pop();
        if(!vis[key]){
        vis[key] = true;
        for(int i = 0;i<rooms[key].size();i++){
            q.push(rooms[key][i]);
        }
       }
       }
       for(int i = 0;i<vis.size();i++){
        if(vis[i]==false)return false;
       }
       return true;
    }
};