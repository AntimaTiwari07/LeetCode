class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int,int>t;
        unordered_map<int,int>b;
        for(int i = 0;i<tops.size();i++){
            t[tops[i]]++;
            b[bottoms[i]]++;
        }
        int maxt = INT_MIN;
        int maxb = INT_MIN;
        int tt = 0;
        int bb= 0;
        for(auto i:t){
            if(i.second>maxt){
                maxt = i.second;
                tt = i.first;
            }
        }
        for(auto i:b){
            if(i.second>maxb){
                maxb = i.second;
                bb = i.first;
            }
        }
        int val=0;
        int count = 0;
        if(maxt>=maxb){
            val=tt;
            for(int i = 0;i<bottoms.size();i++){
                if(bottoms[i]==tt && tops[i]!=tt){
                    swap(bottoms[i],tops[i]);
                    count+=1;
                }
            }
            for(int i = 0;i<tops.size()-1;i++){
                if(tops[i]!=tops[i+1])return -1;
            }
            return count;
        }
        else{
            val=bb;
            for(int i = 0;i<tops.size();i++){
                if(tops[i]==tt && bottoms[i]!=tt){
                    swap(tops[i],bottoms[i]);
                    count+=1;
                }
            }
            for(int i = 0;i<bottoms.size()-1;i++){
                if(bottoms[i]!=bottoms[i+1])return -1;
            }
        }
       return count;

    }
};