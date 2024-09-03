class Solution {
public:
    int getLucky(string s, int k) {
        long long rem = 0;
         int temp = 0;
     for(int i=0;i<s.length();i++){
        int x =s[i]-96;
         if(x>9){
            int temp =0;
            while(x!=0){
                 temp = temp +(x%10);
                 x = x/10;
            }
            rem = rem + temp;
         }
         else{
            rem = rem + x;
         }
     }
        int i = 0;
        while(i<k-1){
            long long  sum = 0;
        while(rem!=0){
            sum = (rem%10)+sum;
            rem = rem/10;
        }
            rem = sum;
            i++;
        }
 
        return rem;
    }
};