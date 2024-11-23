class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long long count = 0;
        for(int i = s.size()-1;i>=0;i--){
           count = count +shifts[i];
                int temp = ((s[i]-'a')+count)%26;
                s[i] = temp+'a';
            
        }
        return s; 
    }
};