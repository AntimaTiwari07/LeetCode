class Solution {
public:
    bool isPalindrome(string s) 
{
  int i = 0;
  int j = s.size()-1;
  while(i<j){
     while(i<s.size() &&(!((s[i]>='a' && s[i]<='z' )||( s[i]>='0' && s[i]<='9')||(s[i]>='A' && s[i]<='Z' ))))i++;
     while(j>=0 && (!((s[j]>='a' && s[j]<='z' )|| (s[j]>='0' && s[j]<='9')||(s[j]>='A' && s[j]<='Z' ))))j--;
     if(i<s.size()&& j>=0){
      if(s[i]>='A'&& s[i]<='Z')s[i]=  (s[i]-'A')+'a';
     if(s[j]>='A' && s[j]<='Z')s[j]= (s[j]-'A')+'a';
    
      if(s[i]!=s[j])return false;
      else{i++;
      j--;} 
  }
  }
  return true;
}

};