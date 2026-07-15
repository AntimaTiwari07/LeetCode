class Solution {
public:
int gcdd(int a,int b){
    if(a==0)return b;
    if(b==0)return a;
    if(a<b){
        swap(a,b);
    }
    return gcdd(a%b,b);
}
    int gcdOfOddEvenSums(int n) {
        int total = (2*n)*(2*n+1)/2;
        int even = 2*(n*(n+1)/2);
        int odd = total-even;
        cout<<even<<" "<<odd<<endl;
      return gcdd(even,odd);
    }
};