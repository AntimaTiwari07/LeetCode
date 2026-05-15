class Solution {
public:
    bool isHappy(int n) {
       unordered_set<int>st;
        while(n!=1){
        int temp = n;
        int num = 0;
        while(temp!=0){
            num = num + pow((temp%10),2);
            temp/=10;
        }
        if(st.find(num)!=st.end())return false;
        st.insert(num);
        n = num;
        }
    return true;
    }
};