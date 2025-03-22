class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
       unordered_map<string,int>mp;
        set<string>ans;
        for(int i=0;i<supplies.size();i++){
            mp[supplies[i]]=1;
        }
        for(int i = 0;i<recipes.size();i++){
        for(int i =0;i<recipes.size();i++){
            string s = "";
            bool valid = true;
           for(int j = 0;j<ingredients[i].size();j++){
            s = ingredients[i][j];
            if(mp[s]!=1){
                valid = false;
                break;
            }
           }
           if(valid){
            mp[recipes[i]]=1;
            if(ans.find(recipes[i])==ans.end())ans.insert(recipes[i]);
           }
        }
        }
        vector<string>v(ans.begin(),ans.end());
        return v;
    }
};