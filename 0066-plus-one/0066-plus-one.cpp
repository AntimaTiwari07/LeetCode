class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i = digits.size()-1;i>=0;i--){
            if(digits[i]+carry>9){
                digits[i] = 0;
                carry = 1;
            }
            else {
                digits[i] = digits[i]+carry;
                carry = 0;
            }
        }
        if(carry==1){
            vector<int>ans;
            ans.push_back(1);
            for(int i = 0;i<digits.size();i++){
                ans.push_back(digits[i]);
            }
            return ans;
        }
        return digits;
    }
};