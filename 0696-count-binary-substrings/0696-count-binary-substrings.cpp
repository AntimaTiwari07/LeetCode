class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int>v;
        int i = 0;
        int j = 0;
        int cnt = 0;
        while(j<s.size()){
            if(s[i]==s[j]){
                cnt+=1;
                j++;
            }
            else{
                v.push_back(cnt);
                cnt = 0;
                while(s[i]!=s[j]){
                    i++;
                }
            }
        }
        v.push_back(cnt);
        int ans = 0;
        for(int i = 0;i<v.size()-1;i++){
            cout<<v[i]<<" ";
         ans += min(v[i],v[i+1]);
        }
        cout<<v[v.size()-1]<<endl;;
        return ans;
    }
};