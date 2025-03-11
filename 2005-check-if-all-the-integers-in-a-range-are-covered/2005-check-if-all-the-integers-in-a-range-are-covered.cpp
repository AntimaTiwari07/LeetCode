class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        sort(ranges.begin(),ranges.end());
       while(left<=right){
        bool valid = false;
        for(int i =0;i<ranges.size();i++){
            if(left>=ranges[i][0] && left<=ranges[i][1] ){
                valid = true;
                break;
            }
        }
        if(!valid)return false;
        else{
            left++;
        }
       }
       return true;
    }
};