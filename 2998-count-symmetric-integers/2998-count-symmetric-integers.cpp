class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
      for(int ii = low;ii<=high;ii++){
        string temp ="";
        int i = ii;
        while(i>0){
            int x = i%10;
           temp+=(char)(x+'0');
            i/=10;
        }
        reverse(temp.begin(),temp.end());
       
        if(temp.size()%2!=0)continue;
        else {
           
            int size = temp.size()/2;
            int first = 0;
            int last = 0;
            for(int i = 0;i<size;i++){
                first+=temp[i];
            }
            for(int i = temp.size()-1;i>=temp.size()-size;i--){
                last+=temp[i];
            }
            if((first!=0 && last!=0) && first==last)count+=1;
        }
      }  
      return count;
    }
};