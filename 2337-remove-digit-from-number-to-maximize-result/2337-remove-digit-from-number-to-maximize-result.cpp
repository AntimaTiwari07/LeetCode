class Solution {
public:
    string removeDigit(string number, char digit) {
        vector<string>v;
        for(int i = 0;i<number.size();i++){
            string newstr = "";
            if(number[i]==digit){
            for(int j = 0;j<number.size();j++){
                if(i!=j){
                    newstr = newstr + number[j];
                    }
            }
             v.push_back(newstr);
        }
       
        }
        for(int i = 0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        /*
        for(int j = 0;j<v.size();j++){
        for(int i = 0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
               v.erase(v.begin()+i);
            }
        }
        }
       int maxnum ;
       int idx = 0;
       int size = v[0].size();
       cout<<"size = "<<size<<endl;
             for(int j=0;j<size;j++){
                 maxnum = v[0][j]-48;
                 idx = 0;
                 bool run = false;
                for(int i = 1;i<v.size();i++){
                     if( maxnum<v[i][j]-48){
                        run = true;
                        maxnum = v[i][j]-48;
                        idx = i;
                     }
                     else if(maxnum==v[i][j]-48) {
                        run = true;
                        idx = 0;
                }
                }
                 if(!run) break;
              else if(idx!=0){
                break;
              }
             }
             return v[idx];
             */
             string result = v[0];
             for(int i = 1;i<v.size();i++){
                if(v[i]>result){
                    result = v[i];
                }
             }
             return result;
    }
};