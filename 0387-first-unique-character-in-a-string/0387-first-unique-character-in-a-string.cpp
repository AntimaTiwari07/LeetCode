class Solution {
public:
    int firstUniqChar(string s) {
        set<char>ch;
        for(int i = 0;i<s.size();i++){
            if(ch.find(s[i])==ch.end()){
                ch.insert(s[i]);
            bool valid = true;
            for(int j = i+1;j<s.size();j++){
                if(s[i]==s[j]) {
                    valid = false;
                    break;
                }
            }
            if(valid){return i;}
            }
        }
        return -1;
    }
};