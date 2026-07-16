class Solution {
public:
bool correctCode(string &s){
    if(s.size()==0)return false;
   int i = 0;
   while(i<s.size()){
    if(s[i]<='z' && s[i]>='a')i++;
    else if(s[i]>='A' && s[i]<='Z')i++;
    else if (s[i]=='_')i++;
    else if(s[i]>='0' && s[i]<='9')i++;
    else break;
   }
   if(i==s.size())return true;
   return false;
}
bool checkbusiness(string &s){
    if(s=="electronics" || s=="grocery"|| s=="pharmacy"||s=="restaurant")return true;
    return false;
}
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
       
        vector<string>ele;
        vector<string>ph;
        vector<string>grc;
        vector<string>res;
        for(int i = 0;i<code.size();i++){
            if(correctCode(code[i]) && checkbusiness(businessLine[i]) && isActive[i]){    
                if(businessLine[i]=="electronics")ele.push_back(code[i]);
                else if(businessLine[i]=="grocery")grc.push_back(code[i]);
                else if(businessLine[i]=="pharmacy")ph.push_back(code[i]);
                else res.push_back(code[i]);
            }
        }
        sort(ele.begin(),ele.end());
        sort(grc.begin(),grc.end());
        sort(ph.begin(),ph.end());
        sort(res.begin(),res.end());
        
        vector<string>ans;
        for(int i = 0;i<ele.size();i++)ans.push_back(ele[i]);
        for(int i = 0;i<grc.size();i++)ans.push_back(grc[i]);
        for(int i = 0;i<ph.size();i++)ans.push_back(ph[i]);
        for(int i = 0;i<res.size();i++)ans.push_back(res[i]);
        return ans;
    }
};