class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7 || n==10 ){return true;}
       int ans = n;
       unordered_set<int>v;
        while(ans>1){
            int temp = ans;
            int val = 0;            
            int count = 0;            
         while(temp!=0){
             val += pow((temp%10),2);
             count++;
             temp = temp/10;
         }  
         if(v.find(val)!=v.end()){return false;}
         else v.insert(val);
         ans = val;
        }
        return true;
    }
};