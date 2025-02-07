class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
      int boat = 0;
      int sum = 0;
      sort(people.begin(),people.end());
      int i = 0;
      int j = people.size()-1;
      while(i<=j){
         if(i==j && people[i]<=limit){
            boat+=1;
            i++;
            j--;
        }
        else if(people[i]+people[j]<=limit){
            boat+=1;
            i++;
            j--;
        }
        else if(people[i]+people[j]>limit){
            if(people[j]>people[i]){
              boat+=1;
              j--;
            }
            else if(people[j]<people[i]){
                boat+=1;
                i++;
            }
            else{
                boat+=2;
                i++;
                j--;
            }
        }
      }
      return boat;
    }
};