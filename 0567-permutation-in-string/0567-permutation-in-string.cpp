class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp;
        if(s1.size()>s2.size())return false;
        for(int i = 0;i<s1.size();i++){
            mp[s1[i]]++;
        }
        unordered_map<char,int>ss;
        for(int i = 0;i<s1.size();i++){
            ss[s2[i]]++;
        }
        if(ss==mp)return true;
        for(int i = s1.size();i<s2.size();i++){
            ss[s2[i]]++;
            ss[s2[i-s1.size()]]--;
            if(ss[s2[i-s1.size()]]==0){
                ss.erase(s2[i-s1.size()]);
            }
           
            if(ss==mp)return true;
        }
        return false;
    }
};