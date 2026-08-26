class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = string(101,1);
        int size = INT_MAX;
        for(int i = 0;i<s.size();i++){
            int cnt = 0;
            string str = "";
            for(int j = i;j<s.size();j++){
                if(s[j]=='1')cnt+=1;
                str+=s[j];
                if(cnt==k){
                    if(str.size()<size){
                        size = str.size();
                        ans = str;
                    }
                    else if(str.size()==size){
                        size = str.size();
                        ans = min(ans,str);
                    }
                }
            }
        }
        if(ans.size()==101)return "";
        return ans;
    }
};