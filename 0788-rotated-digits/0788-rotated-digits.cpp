class Solution {
public:
    int rotatedDigits(int n) {
        unordered_map<char,char>mp;
        mp['2']='5';
        mp['5'] = '2';
        mp['6'] = '9';
        mp['9'] = '6';
        mp['1'] = '1';
        mp['0'] = '0';
        mp['8'] = '8';
        mp['3']= 'a';
        mp['4'] = 'a';
        mp['7'] = 'a';
        int cnt = 0;
        for(int i = 1;i<=n;i++){
            string s = to_string(i);
            string temp = "";
           for(int j = 0;j<s.size();j++){
            if(mp[s[j]]=='a'){temp = "";break;}
             temp+=mp[s[j]];
           }
           
           if(temp!="" && temp!=s){
          
            cnt+=1;
           }

        }
        return cnt;
    }
};