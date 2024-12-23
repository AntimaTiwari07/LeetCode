class Solution {
public:
    string reverseStr(string s, int k) {
        /*
        if(s.size()<k){
            return s;
        }
        reverse(s.begin(),s.begin()+k);
       if(s.size()-2*k>=k && s.size()-2*k <2*k ){
        reverse(s.begin()+2*k,s.begin()+2*k+k);
       } 
       else if(s.size()-2*k < k){
        reverse(s.begin()+2*k,s.end());
       }
       return s;
       */
       if(s.size()<k){
        for(int i = 0;i<s.size()/2;i++){
           char tem = s[i];
           s[i] = s[s.size()-1-i];
           s[s.size()-i-1] = tem;
        }
        return s;
       }
   for(int i = 0;i<s.size();i+=2*k){
    int n = s.size();
    int st = i;int end = std::min(st+k-1,n-1);
    while(st<end){
        char temp = s[st];
        s[st]=s[end];
        s[end]=temp;
        st++;
        end--;
    }
   }
   return s;
    }
};