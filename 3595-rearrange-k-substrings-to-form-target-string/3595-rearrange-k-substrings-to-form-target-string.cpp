class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        if(s.size()%k!=0)return false;
        vector<string>v1;
        string temp = "";
        vector<string>v2;
        string temp2 = "";
        int cnt1 = 0;
        int cnt2 = 0;
           for(int i = 0;i<s.size();i++){
            cnt1++;
            cnt2++;
            temp+=s[i];
            temp2+=t[i];
            if(cnt1==(s.size()/k)){
                v1.push_back(temp);
                temp = "";
                cnt1 = 0;
            }
            if(cnt2==(s.size()/k)){
                v2.push_back(temp2);
                temp2 = "";
                cnt2 = 0;
            }
           }
           sort(v1.begin(),v1.end());
           sort(v2.begin(),v2.end());
         
           string x ="";
           string y = "";
           
           for(int i =0;i<v1.size();i++){
            x+=v1[i];
           }
           for(int i= 0;i<v2.size();i++){
            y+=v2[i];
           }
           for(int i = 0;i<x.size();i++){
             if(x[i]!=y[i])return false;
           }
           return true;
    }
};