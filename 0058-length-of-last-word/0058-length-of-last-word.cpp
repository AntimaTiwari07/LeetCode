class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>v;
        string newstr = "";
        for(int i = 0;i<s.size();i++){
            if(s[i]!=' ') newstr+=s[i];
            else if(newstr.size()!=0){
             v.push_back(newstr);
             cout<<newstr<<endl;
             newstr = "";
            }
        }
        if(newstr.size()!=0)v.push_back(newstr);
        int size = v[v.size()-1].size();
        return size;
    }
};