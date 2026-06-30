class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for(int i = 0;i<patterns.size();i++){
            int k = 0;
            int j = 0;
            while(j<word.size() && k<patterns[i].size()){
                if(word[j]==patterns[i][k]){
                    j++;
                    k++;
                if(k==patterns[i].size()){
                    cnt+=1;
                    break;
                }
                }
                else if(k>0){
                    j = (j-k)+1;
                    k = 0;
                }
                else {j++;}
                
            }
        }
        return cnt;
    }
};