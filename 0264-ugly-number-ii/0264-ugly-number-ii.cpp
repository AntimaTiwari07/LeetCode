class Solution {
public:
    int nthUglyNumber(int n) {
     vector<int>arr(n+1);
     arr[1]=1;
     //index i1,i2,i3
     int i1,i2,i3;
     i1=i2=i3=1;
    int mini = INT_MAX;
     for(int i = 2;i<=n;i++){
        int ugly2 = arr[i1]*2;
        int ugly3 = arr[i2]*3;
        int ugly5 = arr[i3]*5;

       mini = min({ugly2,ugly3,ugly5,mini});
       arr[i] = mini;
         
         if(mini==ugly2) i1++;
         if(mini== ugly3) i2++;
         if(mini==ugly5) i3++;
         mini = INT_MAX;
     }
       return arr[n];
    }
};