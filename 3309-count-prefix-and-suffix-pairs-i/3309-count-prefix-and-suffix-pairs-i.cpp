class Solution {
public:
     bool isPrefixAndSuffix(string s1,string s2){
       for(int i = 0;i<s1.size();i++){
        if(s2[i]!=s1[i])return false;
       }
       for(int i = s1.size()-1,k=s2.size()-1;i>=0;i--){
        if(s2[k]!=s1[i])return false;
        k--;
       }
       return true;
     }
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for(int i = 0;i<words.size();i++){
            for(int j = i+1;j<words.size();j++){
                if(isPrefixAndSuffix(words[i],words[j]))count++;
            }
        }
        return count;
    }
};