class Solution {
public:
void solve(string &digits,unordered_map<int,vector<char>>&mp,string ans,int i,vector<string>&result){
    if(i==digits.size()){
       if(!ans.empty())result.push_back(ans);
        return;
    }
    int num = digits[i]-'0';
    for(int j = 0;j<mp[num].size();j++){
        char ch = mp[num][j];
         solve(digits,mp,ans+ch,i+1,result);
    } 
}
    vector<string> letterCombinations(string digits) {
        unordered_map<int,vector<char>>mp;
        mp[2]={'a','b','c'};
        mp[3]={'d','e','f'};
        mp[4]= {'g','h','i'};
         mp[5]= {'j','k','l'};
         mp[6]= {'m','n','o'};
         mp[7]= {'p','q','r','s'};
         mp[8]= {'t','u','v'};
         mp[9]= {'w','x','y','z'};

        vector<string>result;
       
        solve(digits,mp,"",0,result);
        return result;
    }
};