class Solution {
public:
    int findMinimumTime(vector<int>& strength, int k) {
        int min_time = INT_MAX;
        sort(strength.begin(),strength.end());
        do{
           int x = 1;
        int time = 0;
       for(int i = 0;i<strength.size();i++){
        if(strength[i]%x==0)time = time + strength[i]/x;
        else time = time + strength[i]/x+1;
        x +=k;
       }
       min_time = min(min_time,time);
        }while(next_permutation(strength.begin(),strength.end()));
        return min_time;
    }
};