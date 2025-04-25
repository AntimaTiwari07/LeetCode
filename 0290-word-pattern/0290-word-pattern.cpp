class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        set<char>p(pattern.begin(),pattern.end());
        int k =0;
        string temp="";
        string prev="";
        unordered_map<string,int>st;
        for( int i = 0;k<pattern.size()&&i<s.size();i++){
             if(s[i]==' '){
                 st[temp]++;
                // cout<<"t = "<<temp<<" & p = "<<prev<<endl;
                if(temp!=prev && st[temp]==1){
                     mp[pattern[k]] = temp;
                     cout<<pattern[k]<<" "<<mp[pattern[k]] <<endl;
                }
                  k++;
                prev = temp;
                temp = "";
            }
           else temp+=s[i]; 
        }
        st[temp]++;
        if(temp!=prev && st[temp]==1){
                     mp[pattern[k]] = temp;
                     k++;
                }
        temp = "";
        string newstr="";
        for(int i = 0;i<pattern.size();i++){
            cout<<pattern[i]<<" "<<mp[pattern[i]]<<endl;
           newstr+=mp[pattern[i]]+' ';
        }
        cout<<newstr<<endl;
        if((newstr.size()-1)!=s.size())return false;
        for(int i = 0;i<newstr.size()-1;i++){
            if(s[i]!=newstr[i])return false;
        }
        return true;
    }
};