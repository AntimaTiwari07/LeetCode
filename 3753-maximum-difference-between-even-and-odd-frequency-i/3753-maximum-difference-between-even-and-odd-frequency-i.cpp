class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        for(int i = 0;i<s.size();i++){
            mp[s[i]]++;
        }
        int maxo = -1;
        int mine = INT_MAX;
        for(auto i:mp){
            if(i.second%2!=0 && i.second>maxo){
                maxo = i.second;
            }
             if(i.second%2==0 && i.second<mine){
                mine = i.second;
             }
        }
        return maxo-mine;
    }
};