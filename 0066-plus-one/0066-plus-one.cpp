class Solution {
public:
    vector<int> plusOne(vector<int>& digits) { 
        vector<int>v;
        bool check ;
        for(int i =0 ;i<digits.size();i++){ 
            if(digits[i]==9){
                check = true;
            }
            else{
                check = false;
                break;
            }
        }
        if(check == true) {
            v.push_back(1);
            for(int i = 1;i<digits.size()+1;i++) {
                v.push_back(0);
            }
           return v;
        }
        else {
            int j = digits.size()-1;
        while( j>=0){
            if(digits[j]>=9){
                digits[j]=0;
            }
            else  {
                digits[j]=digits[j]+1;
                break;
            }
            j--;
        }
        }    
return digits;

    }
};