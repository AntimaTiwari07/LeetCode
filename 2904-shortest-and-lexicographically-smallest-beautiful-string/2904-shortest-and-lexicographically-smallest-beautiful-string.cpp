class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string st= "";
        string ans = string(101,'1');
        int cntt = 0;
        for(int i = 0;i<k-1;i++){
            if(s[i]=='1')cntt+=1;
            st+=s[i];
        }
        int size = k;
        for(int i = k-1;i<s.size();i++){
            st+=s[i];
            if (s[i]=='1')cntt++;
            // cout<<"st = "<<st<<endl;
            string str=st;
            int cnt = cntt;
            // cout<<"st = "<<st<<endl;
            for(int j = i+1;j<s.size();j++){
                if(cnt==k){
                        ans = min(ans,str);
                        //  cout<<" and = "<<ans<<endl;
                }  
                if(s[j]=='1')cnt+=1;
                str+=s[j];
                if(str[0]=='1')cnt-=1;
                str = string(str.begin()+1,str.end());
                //   cout<<str<<" "<<cnt<<"    ";
                }
                if(cnt==k){
                        ans = min(ans,str);
                        //  cout<<" and = "<<ans<<endl;
                }  
                 if(ans.size()!=101)return ans;
            }
        if(ans.size()==101)return "";
        return ans;
    }
};