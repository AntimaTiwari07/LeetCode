class Solution {
public:
    int lastRemaining(int n) {
        int head = 1;//(1st number)
        int diff = 1;
        bool left_to_right = true;
        while(n>1){
            if(left_to_right || n%2==1){
                head +=diff;
            }
            diff = diff*2;
            n = n/2;
            left_to_right = !left_to_right;
        }
        return head;
    }
};