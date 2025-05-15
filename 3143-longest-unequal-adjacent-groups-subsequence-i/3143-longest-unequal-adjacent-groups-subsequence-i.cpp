class Solution {
public:
void solve(vector<string>& words, vector<int>& groups,vector<string>&temp,vector<string>&ans,int prev,int i,unordered_map<string,int>&mp,int maxidx){
    if(i>=words.size()){
        for(int i = 0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        if(!temp.empty() && mp[temp[temp.size()-1]]-mp[temp[0]] > maxidx ){
            ans = temp;
            maxidx = mp[temp[0]]-mp[temp[temp.size()-1]];
        }
        return;
    }
    if(prev==-1 || groups[i]!=groups[prev]){
        temp.push_back(words[i]);
    solve(words,groups,temp,ans,i,i+1,mp,maxidx);
    }else{
    solve(words,groups,temp,ans,prev,i+1,mp,maxidx);
    if(!temp.empty())temp.pop_back();
    }
}
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
      vector<string>ans;
      vector<string>temp;
      unordered_map<string,int>mp;
      if(words.size()==1)return words;
      for(int i = 0;i<words.size();i++){
        mp[words[i]]=i;
      }
      solve(words,groups,temp,ans,-1,0,mp,-1);
      return ans;
    }
};