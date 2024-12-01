class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
 vector<pair<float,int>>mp;
  vector<vector<int>>ans;
        for(int i = 0;i<points.size();i++){
                float temp = pow(points[i][0],2)+pow(points[i][1],2);
                 mp.push_back({pow(temp,0.5),i});
        }
        sort(mp.begin(),mp.end());
for(int i = 0;i<k;i++){
    int extra = mp[i].second;
   ans.push_back(points[extra]);
}
return ans;
    }
};