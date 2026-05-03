class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        for(int i = 0;i<s.size();i++){
            char ch = s[0];
           for(int j = 1;j<s.size();j++){
            char neww = s[j];
            s[j] = ch;
            ch = neww;
           }
           s[0] = ch;
           if(s==goal)return true;
        }
        return false;
    }
};