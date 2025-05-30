class Solution {
public:
    int differenceOfSums(int n, int m) {
        int ans;
        int suma = 0;
        int sumb = 0;
        for(int i = 1;i<=n;i++){
            if(i%m==0)suma+=i;
            else sumb+=i;
        }
        return (sumb-suma);
    }
};