class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int>index;
        int count2 = 0;
        for(int i =0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
              index.push_back(i);
            }
            else if(s1[i]==s2[i]){
                count2+=1;
            }
        }
        if(count2==s1.size())return true;
       if(index.size()==2){
            swap(s2[index[0]],s2[index[1]]);
       }
     for(int i = 0;i<s1.size();i++){
        if(s1[i]!=s2[i]){return false;}
     }
        return true;
    }
};