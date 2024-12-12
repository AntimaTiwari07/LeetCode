class Solution {
public:
    bool isHappy(int n) {
       int ans = n;
       unordered_set<int>v;
        while(ans>1){
            int temp = ans;
            int val = 0;                     
         while(temp!=0){
             val += pow((temp%10),2);
             temp = temp/10;
         }  
         if(v.find(val)!=v.end()){return false;}
         else v.insert(val);
         ans = val;
        }
        return true;
    }
};