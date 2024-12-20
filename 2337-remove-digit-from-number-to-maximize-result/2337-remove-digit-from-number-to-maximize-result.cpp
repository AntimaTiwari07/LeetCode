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
             string result = v[0];
             for(int i = 1;i<v.size();i++){
                if(v[i]>result){
                    result = v[i];
                }
             }
             return result;
    }
};