class Solution {
public:
    int minimumLength(string s) {
   unordered_map<char,int>freq;
      for(int i = 0;i<s.size();i++){
        freq[s[i]]++;
      }
      int sum = 0;
      for(auto i:freq){
        if(i.second%2==0)sum+=2;
        else sum+=(i.second%2);
      }
      return sum;
    }
};
/*
unordered_map<char,int>freq;
      for(int i = 0;i<s.size();i++){
        freq[s[i]]++;
      }
      int sum = 0;
      for(auto i:freq){
        if(i.second>2)sum+=(i.second)/2;
        else sum+=i.second;
      }
      return sum;
      */