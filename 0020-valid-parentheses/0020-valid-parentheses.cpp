class Solution {
public:
    bool isValid(string s) {
        /*
       int count_open_bracket = 0;
       int count_open_braces = 0;
       int count_open_paranthesis = 0;
       
      for(int i = 0;i<s.size();i++){
        if(s[i]=='('){
            count_open_paranthesis++;
        }
        else if(s[i]=='['){
           count_open_bracket++;
        }
        else if(s[i]=='{'){
             count_open_braces++;
        }
        else{
            if(s[i]==')'){
                count_open_paranthesis--;
            }
            else if(s[i]==']'){
                 count_open_bracket--;
            }
            else{
                count_open_braces--;
            }
        }
      }
      if( count_open_braces == 0 && count_open_bracket==0 &&  count_open_paranthesis==0){
        return true;
      }
      return false;
*/
  stack<char>st;
  for(int i = 0;i<s.size();i++){
    if(s[i]=='(' || s[i]=='{' || s[i]=='['){
        st.push(s[i]);
    }
    else{
        if(!st.empty()){
       char top = st.top();
       if((s[i]==')' && top == '(') ||(s[i]=='}' && top == '{') || (s[i]==']' && top =='[')){
                  st.pop();
       } 
       else{
        return false;
       }
    }
    else{
        return false;
    }
    }
  }
  if(st.empty()){return true;}
  return false;
  }
};