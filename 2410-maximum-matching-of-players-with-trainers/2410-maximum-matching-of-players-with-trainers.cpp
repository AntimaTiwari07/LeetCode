class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       int cnt = 0;
       sort(players.rbegin(),players.rend());
       sort(trainers.rbegin(),trainers.rend());
       int i = 0;
       int j = 0;
       while(i<players.size()&& j<trainers.size()){
        if(trainers[j]>=players[i]){
            i++;
            j++;
            cnt+=1;
        }
        else{
            i++;
        }
       }
       return cnt;

    }
};