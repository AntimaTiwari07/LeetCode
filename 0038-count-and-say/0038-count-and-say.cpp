class Solution {
public:
void solve(string &s,int i,int n){
    if(i==n){
        return ;
    }
    string temp = "";
    for(int k = 0;k<s.size();k++){
       char ch = s[k];
       int j = k;
       int count = 0;
       while(j<s.size() && s[j]==ch){
        count+=1;
        j++;
       }
       k = j-1;
       temp = temp+ to_string(count)+ch;
    }
    s = temp;
     solve(s,i+1,n);
}
    string countAndSay(int n) {
        string s = "1";
     solve(s,1,n);
     string ans = s;
     return ans;
    }
};