class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(int i = 0;i<t.size();i++){
            mp[t[i]]++;
        }
      vector<int>temp(255,0);
        int i = 0;
        int j = 0;
        int n = s.size();
        bool flag;
        int idx1 = -1;
        int idx2 = -1;
        int minsize = INT_MAX;
        while(i< n && j<n){
           temp[s[j]-'A']++;
            flag = true;
            for(auto i:mp){
                if(temp[i.first-'A']<i.second){
                    flag = false;
                    break ;
                }
            }
            while(flag){
                if((j-i+1)<minsize){
                    minsize = j-i+1;
                    idx1 = i;
                    idx2 = j;
                }
                temp[s[i]-'A']--;
                flag = true;
                for(auto i:mp){
                if(temp[i.first-'A']<i.second){
                    flag = false;
                    break ;
                }
            }
             i++;
            }
            j++;
        }
        string ans = "";
        if(idx1!=-1 && idx2!=-1){
            for(int i = idx1;i<=idx2;i++){
                ans+=s[i];
            }
        }
       return ans;
    }
};