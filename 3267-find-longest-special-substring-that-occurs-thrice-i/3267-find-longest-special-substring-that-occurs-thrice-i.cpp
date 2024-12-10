class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string,int>count;
      for(int i = 0;i<s.size();i++){
        string currstr = "";
        for(int j = i;j<s.size();j++){
            if(currstr.empty() or currstr.back()==s[j]){
                currstr+=s[j];
                count[currstr]++;

            }else{
                break;
            }
        }
      }
      int ans = 0;
      for(auto i: count){
        string temp = i.first;
        if(i.second>=3 && temp.length()>ans){ans = temp.size();}
      }  
      if(ans==0) return -1;
      return ans;
    }
};