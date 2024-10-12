class Solution {
public:
bool power(int num){
    if(num==1) return true;
    if(num<=0 || num%4!=0) return false;
    return power(num/4);      
}
    bool isPowerOfFour(int n) {
        return power(n);
    }
};