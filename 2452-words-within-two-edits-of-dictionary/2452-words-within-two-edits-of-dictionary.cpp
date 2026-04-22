class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans;
       
        for(int i = 0;i<queries.size();i++){
             bool flag = false;
            for(int j = 0;j<dictionary.size();j++){
                int cnt = 0;
               for(int k = 0;k<dictionary[j].size();k++){
                if(dictionary[j][k]!=queries[i][k])cnt+=1;
               }
               if(cnt<=2){flag = true;break;}
            }
               if(flag){
                ans.push_back(queries[i]);
               }
            
        }
        return ans;
    }
};