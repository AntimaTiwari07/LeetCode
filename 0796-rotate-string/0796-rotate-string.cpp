class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())return false;
        int n = s.size();
        for(int i = 0;i<n;i++){
          char last = s[s.size()-1];
          string temp = string(s,0,s.size()-1);
          s = last + temp;
        //   cout<<s<<endl;
          if(s==goal)return true;
        }
        return false;
    }
};