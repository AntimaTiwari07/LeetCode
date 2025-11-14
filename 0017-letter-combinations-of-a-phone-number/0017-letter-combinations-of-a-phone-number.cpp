class Solution {
public:
void solve(string digits,string temp,int i,unordered_map<char,string>&mp,vector<string>&ans){
    if(i==digits.size()){
        cout<<temp<<endl;
        ans.push_back(temp);
        return;
    }
    string str = mp[digits[i]];
    for(int j = 0;j<str.size();j++){
        solve(digits,temp+str[j],i+1,mp,ans);
    }
}
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
  vector<string>ans;
        solve(digits,"",0,mp,ans);
        return ans;
    }
};