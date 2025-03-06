class Solution {
public:
    bool checkPowersOfThree(int n) {
        int arr[17];
        arr[0]=1;
        for(int i = 1;i<17;i++){
            arr[i]=3*arr[i-1];
        }
        int num = n;
        for(int i = 16;i>=0;i--){
            if(arr[i]<=num){
                num -= arr[i];
            }
        }
        if(num==0)return true;
        return false;
    }
};