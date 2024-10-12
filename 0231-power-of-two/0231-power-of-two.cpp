class Solution {
public:
bool power(int num){
    if(num==1) return true;
    if(num<=0 || num%2!=0) return false;
    return power(num/2);
}
    bool isPowerOfTwo(int n) {
       return power(n);

    }
};