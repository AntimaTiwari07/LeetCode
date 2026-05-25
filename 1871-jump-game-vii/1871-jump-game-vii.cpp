class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
         if(s[s.size()-1]=='1')return false;
        int n=s.size();
        queue<int>q;
        vector<bool>vis(s.size(),false);
        q.push(0);
        vis[0] = true;
        int maxreach = 0;
        while(!q.empty()){
            int idx = q.front();
            q.pop();
            if(idx==n-1)return true;
            for(int j = max(maxreach,idx+minJump); j<=(min(idx+maxJump,n-1));j++){
                if(!vis[j] && s[j]=='0') {
                    q.push(j);
                    vis[j] = true;
                }
            }
            maxreach = (min(idx+maxJump,n-1))+1;
        }
        // cout<<mp.size()<<endl;
        // for(auto i:mp){
        //   cout<<"map"<<endl;
        //     vector<int>v = i.second;
        //     cout<<i.first<<"  ";
        //     for(int j = 0;j<v.size();j++){
        //         cout<<v[j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        // while(!q.empty()){
        //     int idx = q.front();
        //     q.pop();
        //     if(idx==s.size()-1)return true;
        //     for(int j = 0;j<mp[idx].size();j++){
        //         if(!vis[mp[idx][j]]){
        //             q.push(mp[idx][j]);
        //             vis[mp[idx][j]] = true;
        //         }
        //     }
        // }
        
        return false;
    }
};