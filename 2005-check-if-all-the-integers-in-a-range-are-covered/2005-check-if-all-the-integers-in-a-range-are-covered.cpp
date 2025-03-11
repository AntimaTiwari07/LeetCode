class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        sort(ranges.begin(),ranges.end());
        bool valid = false;
            for(int i = 0;i<ranges.size() && left<=right;i++){
                if(left>=ranges[i][0] && left<=ranges[i][1]){
                    valid= true;
                     left+=1;
                }
                if(!valid){
                    return false;
                }
               
            }
            return true;
    }
};