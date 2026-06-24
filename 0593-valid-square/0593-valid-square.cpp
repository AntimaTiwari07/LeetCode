class Solution {
public:
int dis(vector<int>&a,vector<int>&b){
    int dx = b[0]-a[0];
    int dy = b[1]-a[1];
    return (dx*dx + dy*dy);
}
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_map<int,int>mp;
       mp[dis(p1,p2)]++;
       mp[dis(p1,p3)]++;
       mp[dis(p1,p4)]++;
       mp[dis(p2,p3)]++;
       mp[dis(p2,p4)]++;
       mp[dis(p3,p4)]++;
    
      if(mp.size()==2){
        vector<int>cnt(2);
        int k = 0;
        for(auto i:mp){
            cnt[k++] = i.first;
        }
        sort(cnt.begin(),cnt.end());
        if(cnt[1]!=2*cnt[0])return false;
        return true;
      }
      return false;
    }
};