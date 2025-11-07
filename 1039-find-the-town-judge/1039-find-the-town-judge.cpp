class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       vector<int>trustcnt(n+1,0);
        for(int i = 0;i<trust.size();i++){
            trustcnt[trust[i][0]]--;
            trustcnt[trust[i][1]]++;
        }
       for(int i = 1;i<=n;i++){
        if(trustcnt[i]==(n-1))return i;
       }
        return -1;
    }
};