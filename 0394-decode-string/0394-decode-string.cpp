class Solution {
public:
    string decodeString(string s) {
        stack<int>st;
        stack<int>num;
        int n = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]>='0'&& s[i]<='9'){
                n = n *10+(char)(s[i]-'0');
            }
            else if(s[i]=='['){
                num.push(n);
                st.push(i);
                n = 0;
            }
            else if(s[i]==']'){
                int idx = st.top();
                string start = s.substr(0,idx);
                string end = s.substr(i+1,s.size());
                string temp = "";
                for(int j = idx;j<i;j++){
                    if((s[j]>='a'&&s[j]<='z') || (s[j]>='A' && s[j]<='Z')){
                        temp+=s[j];
                    }
                }
                string x = "";
                int val = num.top();
                for(int k = 1;k<=val;k++){               
                    x+=temp;
                }
                i = st.top();
                cout<<"num = "<<num.top()<<endl;
                num.pop();
                st.pop();
                s = start+x+end;
                cout<<"new s = "<<s<<endl;    
            }
        }
    cout<<s<<endl;
    string ans = "";
    for(int j = 0;j<s.size();j++){
        if((s[j]>='a'&&s[j]<='z') || (s[j]>='A' && s[j]<='Z')){
                        ans+=s[j];
                    }
    }
    return ans;
    }
};