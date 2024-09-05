class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int>v;
        int sum = 0;
        for(int i = 0;i<rolls.size();i++){
            sum = sum + rolls[i];
        }
        int total = mean * (rolls.size()+n);
        
        int diff = total-sum;
   
    int missing = n;
    while(missing>0){
    if((diff/missing) <=6 && (diff/missing) >=1 )
        v.push_back(diff/missing);     
    else  break;
      diff -= (diff/missing); 
        missing --;   
    }
    if(v.size()==n){
        return v;
    }
     return {};
    }
};