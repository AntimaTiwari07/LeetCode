class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>maxfreq(26,0);
        vector<string>ans;
        for(int i = 0;i<words2.size();i++){
            vector<int>freq(26,0);
            for(int j = 0;j<words2[i].size();j++){
                freq[words2[i][j]-'a']++;
            }
            for(int i = 0;i<26;i++){
                maxfreq[i]=max(maxfreq[i],freq[i]);
            }
        }

         for(int i = 0;i<words1.size();i++){
             vector<int>f(26,0);
            for(int j = 0;j<words1[i].size();j++){
                f[words1[i][j]-'a']++;
            }
            bool valid = true;
            for(int i = 0;i<26;i++){
                if(f[i]<maxfreq[i]){
                    valid = false;
                    break;
                }
            }
            if(valid)ans.push_back(words1[i]);
        }
        return ans;
    }
};