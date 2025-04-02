class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int>ans;
        for(int i = 0;i<digits.size();i++){
            if(digits[i]!=0){
            for(int j = 0;j<digits.size();j++){
                for(int k = 0;k<digits.size();k++){
                    if(i!=j && i!=k && j!=k ){
                      int temp= digits[i]*100+digits[j]*10+digits[k];
                      if(temp%2==0 &&ans.find(temp)==ans.end())ans.insert(temp);
                    }
                }
            }
            }
        }
        return ans.size();
    }
};