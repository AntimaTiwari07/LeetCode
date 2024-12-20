class Solution {
public:
    int secondHighest(string s) {
        std::set<int>digit;
       for(int i = 0;i<s.size();i++){
         if(s[i]>='0' && s[i]<='9'){
            if(digit.find(s[i]-48)==digit.end()) digit.insert(s[i]-48);
         }
       } 
      vector<int>v;
      for(auto it = digit.begin();it!=digit.end();it++){
        v.push_back(*it);
      }
      for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
      }
      if(v.empty())return -1;
      if(v.size()==1) return -1;

      sort(v.rbegin(),v.rend());
      return v[1];
       /*
       sort(digit.rbegin(),digit.rend());
       for(int i = 0;i<digit.size();i++){
        for(int j = 0;j<digit.size()-1;j++){
            if(digit[j]==digit[j+1]){
                digit.erase(digit.begin()+j);
            }
        }
       }
       for(int i = 0;i<digit.size();i++){
        cout<<digit[i]<<" ";
       }
       */
     
    }
};