class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        vector<int>v;
        s = "1"+s+"1";
        int act = 0;
        int cnt = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='1'){
                if(cnt>0){
                v.push_back(cnt);
                cnt = 0;
                }
                act+=1;
            }
            else cnt+=1;
        }
        int maxi = 0;
        if(v.size()>1){
            for(int i = 0;i<v.size()-1;i++){
                maxi = max(maxi,v[i]+v[i+1]);
            }
        }
        return (maxi+act)-2;
    }
};