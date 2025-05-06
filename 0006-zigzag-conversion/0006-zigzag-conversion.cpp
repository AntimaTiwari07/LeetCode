class Solution {
public:
    string convert(string s, int numRows) {

       vector<vector<char>>v(numRows);
       if(numRows==1)return s;
       int k = 0;
      for(int i = 0;i<s.size();i++){
         v[k].push_back(s[i]);
         k+=1;
         if(k==numRows){
          k = numRows-2;
          while( i< s.size() && k>0){
              i++;
            if(i<s.size())v[k].push_back(s[i]);
            k-=1;
          }
         }
      }
      string str="";
      for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            str = str+v[i][j];
        }
        cout<<endl;
      }
      return str;
    }
};