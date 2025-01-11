class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string>ans;
        int maxi = INT_MIN;
        int cnt = 0;
        int no_of_words = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]==' '){
                no_of_words++;
                if(cnt>maxi){ maxi = cnt;}
                cnt = 0;
            }
            else cnt++;
        }
      no_of_words++;
      maxi = max(maxi,cnt);
        cout<<no_of_words<<" "<<maxi<<endl;
        int row = no_of_words;
      int col = maxi;
      vector<vector<char>>matrix(row,vector<char>(col,' '));
      int i = 0;
      int j = 0;
      for(int k = 0;k<s.size();k++){
        if(s[k]==' '){
            i++;
            j=0;
        }
        else {
            if(j<col)matrix[i][j++] = s[k];
      }
      }
       for(int j= 0;j<col;j++){
        string newstr = "";
        for(int i = 0;i<row;i++){
           newstr+=matrix[i][j];
        }
        while(!newstr.empty() && newstr.back()==' '){
            newstr.pop_back();
        }
        ans.push_back(newstr);
      }
      return ans;
    }
};