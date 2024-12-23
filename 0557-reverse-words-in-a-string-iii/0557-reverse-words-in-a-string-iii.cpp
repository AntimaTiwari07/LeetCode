class Solution {
public:
    string reverseWords(string s) {
        string newstr = "";
        vector<string>v;
        int st =0;
        int end = 0;
        string str = "";
        while(end<s.size()){
            if(s[end]==' '||end == s.size()-1){
                str = "";
                if(end==s.size()-1){
                    end = s.size();
                }
                for(int idx = st;idx<end;idx++){
                 str+=s[idx];
                }
                for(int j = 0;j<str.size()/2;j++){
            swap(str[j],str[str.size()-1-j]);
           }
        if(end==s.size()){newstr = newstr+str;}
           else newstr = newstr+str+" ";
           st = end+1;
        }    
        end++;    
            }
        /*
        for(int i = 0;i<v.size();i++){
            string st = v[i];
           for(int j = 0;j<st.size()/2;j++){
            swap(st[j],st[st.size()-1-j]);
           }
        if(i==v.size()-1){newstr = newstr+st;}
           else newstr = newstr+st+" ";
        
        }
        */
        return newstr;
    }
};