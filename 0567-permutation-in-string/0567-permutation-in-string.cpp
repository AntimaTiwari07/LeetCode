class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        if(s1.size()>s2.size())return false;
        unordered_map<char,int>mp;
        unordered_map<char,int>v;
        for(int i= 0;i<s1.size();i++){
            mp[s1[i]]++;
             v[s2[i]]++;
        }
        
        bool flag = true;
        for(auto i:mp){
            if(v[i.first]!=i.second){
                flag = false;
                break;
            }
        }
        // for(auto i:v){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        if(flag)return true;
        int prev_idx = 0;
        for(int i = k ;i<s2.size();i++){
            v[s2[i]]++;
            v[s2[prev_idx]]--;
            if(v[s2[prev_idx]]==0){
                v.erase(s2[prev_idx]);
            }
            prev_idx++;
            flag = true;
        for(auto i:mp){
            if(v[i.first]!=i.second){
                flag = false;
                break;
            }
        }
        //  for(auto i:v){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        if(flag)return true;
        }
        return false;
    }
};