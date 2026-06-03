class Solution {
public:
    int earliestFinishTime(vector<int>& l, vector<int>& ld, vector<int>& w, vector<int>& wd) {
        int minw = INT_MAX;
        int minl = INT_MAX;
        for(int i = 0;i<l.size();i++){
            minl = min(minl,l[i]+ld[i]);
        }
        for(int i = 0;i<w.size();i++){
            minw = min(minw,w[i]+wd[i]);
        }
        int ans = INT_MAX;
            for(int i = 0;i<w.size();i++){
                if(minl>=w[i]){
                    ans = min(ans,minl+wd[i]);
                }
                else ans = min(ans,w[i]+wd[i]);
            }
             for(int i = 0;i<l.size();i++){
                if(minw>=l[i]){
                    ans = min(ans,minw+ld[i]);
                }
                else ans = min(ans,l[i]+ld[i]);
            }
        
        return ans;
    }
};