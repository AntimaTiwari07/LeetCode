class Solution {
public:
    int minJumps(vector<int>& arr) {
        unordered_map<int,vector<int>>mp;
        for(int i = 0;i<arr.size();i++){
            mp[arr[i]].push_back(i);
        }
        // unordered_map<int,vector<int>>v;
       
        // for(int i = 0;i<arr.size();i++){
        //      vector<int>temp(arr.size(),0);
        //     if(i+1<arr.size() && temp[i+1]!=1){v[i].push_back(i+1);temp[i+1] = 1;}
        //     if(i-1>=0 && temp[i-1]!=1){v[i].push_back(i-1); temp[i-1] = 1;}
        //     for(int j = 0;j<mp[arr[i]].size();j++){
        //         if(temp[mp[arr[i]][j]]!=1){v[i].push_back(mp[arr[i]][j]);
        //         temp[mp[arr[i]][j]]=1;
        //         }
        //     }
        // }
        // for(int j = 0;j<mp.size();j++){
        //     for(int k= 0;k<mp[j].size();k++){
        //         cout<<mp[j][k]<<" ";
        //     }
        //     cout<<endl;
        // }
        //bfs
        queue<int>q;
        q.push(0);
        q.push(-1);
        vector<int>vis(arr.size(),0);
        vis[0] = 1;
        int cnt =0;
        while(!q.empty()){
          int idx = q.front();
          q.pop();
          if(idx==-1){
            cnt+=1;
            if(!q.empty())q.push(-1);
            continue;
          }
          if(idx==arr.size()-1)return cnt;
          if(idx+1<arr.size() && !vis[idx+1]){q.push(idx+1);vis[idx+1] = 1;}
          if(idx-1>=0 && !vis[idx-1]){q.push(idx-1);vis[idx-1] = 1;}
          for(int j= 0;j<mp[arr[idx]].size();j++){
            if(!vis[mp[arr[idx]][j]]){
                q.push(mp[arr[idx]][j]);
                vis[mp[arr[idx]][j]] = 1;
            }
          }
          mp[arr[idx]].clear();
        }
        return -1;
    }
};