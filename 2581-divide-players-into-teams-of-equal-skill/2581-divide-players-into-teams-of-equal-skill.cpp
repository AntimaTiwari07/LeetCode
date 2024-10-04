class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
          vector<long long >product;
        bool correct = true ;
         long long sum = 0;
        sort(skill.begin(),skill.end());
          int i = 0;
          int j = skill.size()-1;
          while((i<=(skill.size()/2)-1) &&(j>=skill.size()/2)){
             product.push_back(skill[i]);
             product.push_back(skill[j]);
            i++;
            j--;
          }
          int check_sum = product[0]+product[1];
          for(int i = 2;i<product.size()-1;i+=2){
            int temp = product[i]+product[i+1];
                        if(temp!=check_sum){
                   correct =false;
                   break;
            }
           
          }
         
          if(correct == true){
            for(int i = 0;i<product.size()-1;i+=2){
                sum = sum + (product[i]*product[i+1]);
            }
          }
          else{
            return -1;
          }
return sum;
    }
};