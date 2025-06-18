class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i = 0;
        int j = tokens.size()-1;
        int score =0;
        int ans = 0;
        while(i<=j){
            if(power>=tokens[i]){
                score+=1;
                power-=tokens[i];
                i+=1;
            }
            else{
                if(score>=1){
                    power+=tokens[j];
                    score-=1;
                     j--;
                }
                else{
                    break;
                }
            }
            ans = max(ans,score);
        }
        return ans;
    }
};