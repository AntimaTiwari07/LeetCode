class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
         
        sort(skill.begin(),skill.end());
          int i = 1;
          int j = skill.size()-2;
          long long chemistry = skill[0]*skill[skill.size()-1] ;
          long long sum = skill[0]+skill[skill.size()-1];
        bool check = true ;
          while((i<j)&&(check)){
             if(skill[i]+skill[j]==sum){
                chemistry += skill[i]*skill[j];
           i++;
            j--;
             }
             else{
                check = false;
             } 
          }
          if(check==false){return -1;}
          else {return chemistry;}
    }
};