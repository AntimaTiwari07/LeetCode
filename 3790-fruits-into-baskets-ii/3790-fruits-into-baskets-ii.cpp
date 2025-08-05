class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int cnt = 0;
        for(int i = 0;i<fruits.size();i++){
            bool placed = false;
            for(int j = 0;j<baskets.size();j++){
                if(baskets[j]!=-1 && baskets[j]>=fruits[i]){
                    placed = true;
                    baskets[j]=0;
                    break;
                }
            }
            if(!placed)cnt+=1;
        }
        return cnt;
    }
};