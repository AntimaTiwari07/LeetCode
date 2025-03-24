class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        string n  = to_string(num);
        while(n.size()!=1){
            int temp = num;
            while(temp!=0){
                sum+=(temp%10);
                temp/=10;
            }
            num = sum;
            n = to_string(num);
            sum = 0;
        }
        return num;
    }
};