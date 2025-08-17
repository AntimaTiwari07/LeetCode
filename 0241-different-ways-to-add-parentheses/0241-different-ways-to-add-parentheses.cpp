class Solution {
public:
vector<int> solve(string s){
      vector<int>res;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*'){
            vector<int>left= solve(s.substr(0,i));
            vector<int>right = solve(s.substr(i+1));
//add operation to merge both vectors 
     
        for(int j = 0;j<left.size();j++){
            for(int k = 0;k<right.size();k++){
                if(s[i]=='+'){
                    res.push_back(left[j]+right[k]);
                }
                else if(s[i]=='-'){
                    res.push_back(left[j]-right[k]);
                }
                else {
                    res.push_back(left[j]*right[k]);
                }
            }
        }
    }   
}
 if(res.empty())res.push_back(stoi(s));
 return res;
}
    vector<int> diffWaysToCompute(string expression) {
        return solve(expression);
    }
};