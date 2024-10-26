class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
       vector<string>result;
     result.push_back(folder[0]);
       for(int i = 1;i<folder.size();i++){
        string temp = folder[i];
        string lastele = result.back();
        if(temp.substr(0,lastele.size())!=lastele || temp[lastele.size()]!='/'){
               result.push_back(temp);
        }
       }
       return result;
    }
};