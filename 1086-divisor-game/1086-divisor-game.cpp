class Solution {
public:
    bool divisorGame(int n) {
        bool win;
            if(n%2==0)  win = true; 
            else  win = false; 
        return win;
    }
};