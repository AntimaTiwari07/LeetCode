class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int cnt = 0;
        vector<int>v;
        for(int i = 0;i<capacity.size();i++){
            v.push_back(capacity[i]-rocks[i]);
        }
        sort(v.begin(),v.end());
        for(int i = 0;i<v.size();i++){
                if(v[i]<=additionalRocks && v[i]!=0){
                    additionalRocks-=v[i];
                    cnt+=1;
                }
                else if(v[i]==0){
                    cnt+=1;
                }
        }
        return cnt;
    }
};