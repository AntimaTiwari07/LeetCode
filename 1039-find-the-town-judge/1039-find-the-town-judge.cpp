class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       vector<int>trusty(n+1,0);
       vector<int>ontrust(n+1,0);
        for(int i = 0;i<trust.size();i++){
            trusty[trust[i][0]]++;
            ontrust[trust[i][1]]++;
        }
       for(int i = 1;i<=n;i++){
        if(trusty[i]==0 && ontrust[i]==(n-1))return i;
       }
        return -1;
    }
};