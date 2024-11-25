class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int sum = 0;
        int size = code.size();
        vector<int>v(size,0);
        
    if(k==0){
       return v;
    }
        else if(k>0){
            
          for(int i = 0;i<code.size();i++){
            sum = 0;
           for(int j = 1;j<=k;j++){
            sum+=code[(i+j)%size];
           }
             v[i]=sum; 
        }
        }
        else {
            k = -k;
          for(int i = 0;i<code.size();i++){
            sum = 0;
             for(int j = 1;j<=k;j++)   {
                sum+=code[(size-j+i)%size];
             }    
             v[i]=sum;                         
        }
        }
          return v;
    }
};