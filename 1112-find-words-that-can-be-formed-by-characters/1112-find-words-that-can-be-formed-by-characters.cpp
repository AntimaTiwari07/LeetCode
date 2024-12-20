class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int len = 0;
        string x = chars;
        for(int i = 0;i<words.size();i++){
            string temp = words[i];
            int count =0;
            string temp1 = x;
            for(int k = 0;k<temp.size();k++){
          for(int j = 0;j<temp1.size();j++){
              if(temp1[j]==temp[k]) {
                count++;
                temp1.erase(temp1.begin()+j);
                break;
          }  
        }
            }
            if(count==temp.size()) len = len+count;
        }
        return len;
    }
};