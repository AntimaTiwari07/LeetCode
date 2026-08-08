class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        vector<int>match_suffix(word1.size()+1,0);
        int i = word1.size()-1;
        int j =word2.size()-1;
        while(i>=0 && j>=0){
            if(word1[i]==word2[j]){
                match_suffix[i] = 1+match_suffix[i+1];
                i--;
                j--;
            }
            else{
                match_suffix[i] = match_suffix[i+1];
                i--;
            }
        }
        while(i>=0){
           match_suffix[i] = match_suffix[i+1];
           i--;
        }
        
        vector<int>ans;
        bool canchange = true;
        i = 0;
        j=0;
        while(i<word1.size() && j<word2.size()){
            
            if(word1[i]==word2[j]){
                ans.push_back(i);
                i++;
                j++;
            }
            else if(canchange && match_suffix[i+1]>=word2.size()-1-j){
                canchange = false;
                ans.push_back(i);
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        if(j==word2.size())return ans;
        return {};
    }
};