class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        /*
       if(arr.size()<=0){return arr ;}
         vector<int>temp;
      for(int i = 0;i<arr.size();i++){
        temp.push_back(arr[i]);
      }
      sort(temp.begin(),temp.end());
      vector<int>unique;
      unique.push_back(temp[0]);
       for(int i = 1;i<temp.size();i++){
         if(temp[i]!=temp[i-1]){
            unique.push_back(temp[i]);
       }
       }
       for(int i =0;i< arr.size();i++){
        for(int j = 0;j<unique.size();j++){
            if(arr[i]==unique[j]){
                arr[i]=j+1;
                break;
            }
        }
       }
       
        return arr;
        */
        unordered_map<int,int>map;
     vector<int>temp;
      vector<int>v;
      
       for(int i = 0;i<arr.size();i++){
        v.push_back(arr[i]);
       }
        sort(v.begin(),v.end());
        int rank = 1;
        for (int num : v) {
            if (map.find(num) == map.end()) {
                map[num] = rank;
                rank++;
            }
        }
        for(int i = 0;i<arr.size();i++){
            temp.push_back(map[arr[i]]);
        }
        return temp;
    }
};