class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int dis = 0;
        for(int i = 0;i<colors.size();i++){
            for(int j = i;j<colors.size();j++){
                if(colors[i]!=colors[j]){
                    dis = max(dis,j-i);
                }
            }
        }
        return dis;
    }
};