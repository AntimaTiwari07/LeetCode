class Solution {
public:
    string winningPlayer(int x, int y) {
        int cnt = 0;
        while(x-1>=0 && y-4>=0){
            cnt+=1;
            x-=1;
            y-=4;
        }
        if(cnt%2!=0)return "Alice";
        return "Bob";
    }
};