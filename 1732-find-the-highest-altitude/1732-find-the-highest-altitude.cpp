class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0;
        int num = 0;
        for(int i = 0;i<gain.size();i++){
            num = num+gain[i];
            maxi = max(maxi,num);
     
        }
        return maxi;
    }
};