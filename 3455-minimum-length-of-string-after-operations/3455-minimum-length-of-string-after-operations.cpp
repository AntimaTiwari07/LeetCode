class Solution {
public:
    int minimumLength(string s) {
  int count[26] ={0};
      for(int i = 0;i<s.size();i++){
        count[s[i]-'a']++;
      }
      int sum = 0;
      for(int i = 0;i<26;i++){
        if(count[i]!=0&&count[i]%2==0)sum+=2;
        else sum+=(count[i]%2);
      }
      return sum;
    }
};
