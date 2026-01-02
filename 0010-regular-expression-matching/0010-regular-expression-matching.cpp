class Solution {
public:
 bool f(string &s, string &p,int i,int j){
        if(i==s.size() && j==p.size()){
             return true;
        }
        bool x = false;
        if(j+1<p.size() && p[j+1]=='*' ){
            if(i<s.size() && ( p[j]==s[i] || p[j]=='.') )
            x = x||f(s,p,i+1,j) ;
             x = x||f(s,p,i,j+2);
        }
        else if(i<s.size() && j<p.size() && (s[i]==p[j] || p[j]=='.')){
             x = x||f(s,p,i+1,j+1);
        }
       return x;
        
    } 
    bool isMatch(string s, string p) {
        bool prev = false;
        return f(s,p,0,0);
    }
};