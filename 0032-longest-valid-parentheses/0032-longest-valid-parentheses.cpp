class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>open;
        stack<int>close;
        int startidx = -1;
        int maxi = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='('){
                if(startidx==-1){
                    startidx = i;
                }
                open.push(i);
            }
            else{
                if(!open.empty()){
                maxi = max(maxi,(int)(i-open.top()+1));
                 close.push(i);
                    open.pop();
                }
                else{
                 if(startidx!=-1 && open.empty() && !close.empty()){
                    maxi = max(maxi,(int)close.top()-startidx+1);
                    startidx = -1;
                 }
                }
            }
        }
            while(!open.empty() && !close.empty()){
                if(open.top()<close.top()){
                    maxi = max(maxi,(int)close.top()-open.top());
                    close.pop();
                }
                else{
                    open.pop();
                }
            }
           if(!close.empty() && startidx!=-1){
            maxi = max(maxi,(int)close.top()-startidx+1);
           }
        return maxi;
    }
};