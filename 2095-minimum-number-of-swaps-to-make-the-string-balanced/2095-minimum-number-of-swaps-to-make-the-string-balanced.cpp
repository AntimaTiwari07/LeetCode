class Solution {
public:
    int minSwaps(string s) {
       
        /*
        bool check = false;
        int count = 0;
        if(s.size()==2){
          if(s[0]=='['&&s[1]==']')return 0;
          else {return 1;}
        }
        while(i<j && check == false){
            if((s[i]==']' && s[j]=='[')){
                swap(s[i],s[j]);
                count++;
                for(int i = 0;i<s.size()/2-1;i++){
                    if((s[i]=='[' && s[s.size()-1-i]==']')){
                        check = true;
                    }
                    else{
                        check = false;
                        break;
                    }
                }
            i++;
            j--;
            }
            else{
                j = j-2;
            }
        }
        */
        /*
         int n = s.size();
         int i = 0;
        int j = n-1;
         int count = 0;
        if(s.size()==2){
          if(s[0]=='['&&s[1]==']')return 0;
          else {return 1;}
        }
        while((i<n/2-1)&&(j>=s.size()/2+1)){
             if((s[i] =='['&&s[j]=='[')||(s[i]==']'&&s[j]==']')){
                j = j-2;
             }
             else if((s[i]=='[' && s[j]==']')){
                swap(s[i],s[j]);
                count++;
                i++;
                j--;
             }
        }
        return count;
        */
        int swap = 0;
        int balance = 0;
        for(char c: s){
            if(c=='['){
                balance++;
            }
            else{
                balance--;
            }
            if(balance<0){
                swap++;
                balance = balance+2;
            }
        }
        return swap;
    }
};