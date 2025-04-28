class Solution {
public:
bool check(string &s,int w_size,unordered_map<string,int>&mp){
     unordered_map<string,int>temp;
    for(int i = 0;i<s.size();i+=w_size){
        string str = s.substr(i,w_size);
        temp[str]++;
    }
    for(auto i:mp){
        if(temp[i.first]!=i.second){
            return false;
        }
    }
    return true;
}
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int>mp;
        for(auto w : words){
            mp[w]++;
        }
             vector<int>ans;
             int w_size = words[0].size();
             int k =words.size()*words[0].size();
            
             if(s.size()<k)return {};
             for(int i = 0;i<=s.size()-k;i++){
                string str = s.substr(i,k);
                if(check(str,w_size,mp)){
                    ans.push_back(i);
                }

             }
             if(ans.empty())return {};
            return ans;
    }
};