class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        vector<bool>v(baskets.size(),false);
        int count = 0;
        for(int i = 0;i<fruits.size();i++){
            for(int j =0;j<baskets.size();j++){
                if(!v[j] && baskets[j]>=fruits[i]){
                    v[j]=true;
                    count+=1;
                    break;
                }
            }
        }
        return baskets.size()-count;
    }
};