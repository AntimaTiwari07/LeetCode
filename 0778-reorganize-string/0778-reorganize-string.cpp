class Solution {
public:
    string reorganizeString(string s) {
       int count[26]={0};
       for(int i = 0;i<s.size();i++){
        count[s[i]-'a']++;
       }
       string ans = "";
       int visited = -1;
       int cnt = 0;
       while(cnt<s.size()){
        int idx = -1;
        int maxi = 0;
       for(int i = 0;i<26;i++){
        if(count[i]!=0 && i!=visited){
           if(count[i]>maxi){
            maxi = count[i];
            idx  = i;
           }
        }
       }
       if(idx==-1)return "";
       ans+=(char)(idx+'a');
       cnt+=1;
       visited = idx;
       count[idx]-=1;
       }
       for(int i = 0;i<ans.size()-1;i++){
        if(ans[i]==ans[i+1]){
            return " ";
        }
       }
       return ans;
    }
};