class Solution {
public:
/*
bool is_sorted(string &s){
     for(int i = 0;i<s.size()-1;i++){
        if(s[i]>s[i+1]){return false;}
     }
     return true; 
}
*/
    long long minimumSteps(string s) {
        /*
        if(s.size()==1){
            return 0;
        }
        long long count = 0;
      while(!is_sorted(s)){
        int i=0;
        int j = i+1;
        while((i<j)&&(j<s.size())){
            if(s[i]>s[j]){
                swap(s[i],s[j]);
                count++;
            }
            i++;
            j++;
        }
        }
        return count;
        */
        long long nofone = 0;
        long long ans = 0;
        for(int i = s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                ans+=nofone;
            }
            else
            nofone++;
        }
        return ans;
    }
};