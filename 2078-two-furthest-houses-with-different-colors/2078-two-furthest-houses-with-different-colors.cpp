class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int dis = 0;
        int i = 0;
        int j = colors.size()-1;
        while(j>i){
        if(colors[i]!=colors[j]){
            dis = max(dis,j-i);
            i++;
        }
        j--;
        }
        j = colors.size()-1;
        i = 0;
        while(i<j){
            if(colors[i]!=colors[j]){
            dis = max(dis,j-i);
            j--;
        }
        i++;
        }
        return dis;
    }
};