class Solution {
public:
    int minBitFlips(int start, int goal) {
        //find binary
        vector<int>s;
        vector<int>g;
        while((start!=0)||(goal!=0)){
            int rem = start%2;
            s.push_back(rem);
            int remen = goal%2;
             g.push_back(remen);
            start = start/2;
            goal = goal/2;
        }
        int n = g.size()-1;
        if(n<s.size()){
             while(n<s.size()){
                g.push_back(0);
                n++;
             }
        }
        int count = 0;
        for(int i = 0;i<s.size();i++){
            cout<<s[i]<<" ";
        }
         for(int i = 0;i<g.size();i++){
            cout<<g[i]<<" ";
        }
        for(int i = 0;i<s.size();i++){
            if(s[i]==g[i]) continue;
            else{
                count++;
            }
        }
return count;
    }
};