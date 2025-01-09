class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>ans(queries.size());
        vector<int>s(words.size(),0);
        int sum = 0;
        for(int i = 0;i<words.size();i++){
            if((words[i][0]=='a'||words[i][0]=='e'||words[i][0]=='i'||words[i][0]=='o'||words[i][0]=='u')&&(words[i][words[i].size()-1]=='a'||words[i][words[i].size()-1]=='e'||words[i][words[i].size()-1]=='i'||words[i][words[i].size()-1]=='o'||words[i][words[i].size()-1]=='u')){
                sum+=1;
                s[i] = sum;
            }
            else{
                 s[i]=sum;
            }
        }
        for(int i = 0;i<queries.size();i++){
            if(queries[i][0]==queries[i][1]) {
                if(queries[i][0]!=0&&s[queries[i][0]]-s[(queries[i][0]-1)]<0) ans[i]=0;
                else if(queries[i][0]!=0) ans[i]=s[queries[i][0]]-s[(queries[i][0]-1)];
                else ans[i] = s[queries[i][1]];
                } 
            else if(queries[i][0]==0) ans[i] = s[queries[i][1]]-0;
            else{
                ans[i] = s[queries[i][1]]-s[queries[i][0]-1];
            }
        }
        return ans;
    }
};