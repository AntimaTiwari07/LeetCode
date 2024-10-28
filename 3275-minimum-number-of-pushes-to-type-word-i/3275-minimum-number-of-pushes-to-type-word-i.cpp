class Solution {
public:
    int minimumPushes(string word) {
        int ans  = 8;
        if(word.size()<=8){
            return word.size();
        }
        if(word.size()/8==1){
            ans = 8*1+(word.size()-8)*2;
            return ans;
        }
        if(word.size()/8==2){
            ans = 8*2+8 +(word.size()-16)*3;
        }
        if(word.size()/8==3){
            ans = 8*3+8+16+(word.size()-24)*4;
        }
        

      return ans;
    }
};