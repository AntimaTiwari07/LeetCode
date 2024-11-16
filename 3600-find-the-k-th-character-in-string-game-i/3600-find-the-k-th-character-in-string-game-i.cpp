class Solution {
public:
 void game(string &obj,int k){
    //base case
    if(obj.size()>=k){
        return ;
    }
    int i = 0;
    string newstr = "";
    while(i<obj.size()){
        char s = obj[i] + 1;
        newstr = newstr + s;
        i++;
    }
    obj+=newstr;
   game(obj,k);
 }
    char kthCharacter(int k) {
        string ans = "a";
        game(ans,k);
        return ans[k-1];
    }
};