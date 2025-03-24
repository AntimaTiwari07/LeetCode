class Solution {
public:
    int smallestEvenMultiple(int n) {
        int x = 1;
        while(!((x*n)%n==0 && (x*n)%2==0)){
            x+=1;
        }
        cout<<x<<endl;
        return (x*n);
    }
};