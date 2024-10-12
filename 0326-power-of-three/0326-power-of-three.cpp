class Solution {
public:
bool power(int num){
    //base case
    if(num==1){
        return true;
    }
    if(num<=0 || num%3!=0 ){
        return false;
    }
     return power(num/3);
}
    bool isPowerOfThree(int n) {
        /*
        bool check ;
        if(n==0) check= false;
        else if(n%3==0) {
          for(int i = 1;i*i*i<=n;i++){
            if(pow(3,i)==n) {
                cout<<"power"<<pow(3,i)<<" ";
                check = true;
                break;
          }
        }
        }
        else check= false;
     return check;
     */
      return power(n);
    }
};