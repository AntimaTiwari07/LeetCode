class Solution {
public:
    int pivotInteger(int n) {
        int x= 1;
        int sum =(n*(n+1))/2;
        while(x<=n){
            int sum2 = (x*(x+1))/2;
            if(sum2==(sum-sum2+x))return x;
            x+=1;
        }
        if(x>n)return -1;
        return x;
    }
};