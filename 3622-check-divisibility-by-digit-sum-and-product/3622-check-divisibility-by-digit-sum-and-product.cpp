class Solution {
public:
    bool checkDivisibility(int n) {
        int prod = 1;
        int sum = 0;
        int temp = n;
        while(n!=0){
            int rem = n%10;
            sum+=rem;
            prod*=rem;
            n/=10;
        }
        cout<<sum+prod<<endl;
        int x = sum+prod;
        if(temp%x==0)return true;
        return false;
    }
};