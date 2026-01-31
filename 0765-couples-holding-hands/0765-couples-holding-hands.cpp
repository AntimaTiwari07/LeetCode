class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        unordered_map<int,int>mp;
        for(int i = 0;i<row.size();i+=2){
            mp[i]=i+1;
            mp[i+1]=i;
        }
        int cnt = 0;
        for(int i = 0;i<row.size();i+=2){
           if(row[i+1]!=mp[row[i]]){
            cnt+=1;
            int idx = i+1;
            for(int j = i+2;j<row.size();j++){
                if(row[j]==mp[row[i]]){
                    idx = j;
                    break;
                }
            }
            int temp = row[i+1];
            row[i+1]=row[idx];
            row[idx]=temp;
           }
        }
        return cnt;
    }
};