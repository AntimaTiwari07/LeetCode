class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        bool check = true;
        int ans = 0;
         int count[32] = {0};
     for(int i = 0;i<deck.size();i++){
        count[deck[i]]++;
     } 
     int  a ,b;
      a = count[0];
     for(int i = 1;i<32;i++){
         b = count[i];
        if(a==1){
            check = false;
            break;
        }
        else{
       if(a<b){
        swap(a,b);
     }
     if(b==0) a = a;
     else{
        while(b>0){
            a = a%b;
            swap(a,b);
        }
     }
        }
     }
     return check;
    }
};