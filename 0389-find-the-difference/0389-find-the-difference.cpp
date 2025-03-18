class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>count1(26,0);
         vector<int>count2(26,0);
        for(int i = 0;i<s.size();i++){
            count1[s[i]-'a']++;
        }
        for(int j = 0;j<t.size();j++){
            count2[t[j]-'a']++;
        }
        char ans ;
        for(int i = 0;i<26;i++){
            if(count1[i]!=count2[i]){
                ans = (char)(i+'a');
                break;
            }
        }
        return ans;
    }
};