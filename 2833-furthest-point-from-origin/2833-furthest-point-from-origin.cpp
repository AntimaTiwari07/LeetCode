class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int rig = 0;
        int cnt = 0;
        for(int i = 0;i<moves.size();i++){
            if(moves[i]=='L')left+=1;
            else if(moves[i]=='R')rig+=1;
            else cnt+=1;
        }
        if(left<=rig){
            return (cnt+rig)-left;
        }
        return (cnt+left)-rig;
    }
};