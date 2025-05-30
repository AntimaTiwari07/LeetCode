class Solution {
public:
    int differenceOfSums(int n, int m) {
        int total =  n*(n+1)/2;
        int x  = n/m;
        int can_divided = m*(x*(x+1)/2);
        return (total-can_divided-can_divided);
    }
};