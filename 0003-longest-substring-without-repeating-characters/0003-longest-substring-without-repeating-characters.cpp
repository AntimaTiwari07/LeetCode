class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,bool>mp;
        for(int i = 0;i<s.size();i++){
            mp[s[i]]=true;
        }
      int i = 0;
      int j = 0;
      int length = 0;
      int count = 0;
      while(j<s.size()){
       if(mp[s[j]]){
        count++;
        mp[s[j]]=false;
        length = max(length,count);
        j++;
       }
       else{
            mp[s[i]]=true;
            i++;
            count--;
       }
      }  
      return length;
    }
};