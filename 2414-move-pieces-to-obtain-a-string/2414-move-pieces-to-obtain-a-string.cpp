class Solution {
public:
    bool canChange(string start, string target) {
        const int n=start.size();
        for(int i=0, j=0; i<n || j<n; i++, j++){
            while(i<n && start[i]=='_') i++;
            while(j<n && target[j]=='_') j++;
        //    cout<<i<<", "<<j<<endl;
            char c=start[i];
            if (c !=target[j]) return 0;
            if (c =='L' && i<j) return 0;
            if (c =='R' && i>j) return 0;
        }
        return 1;
    }
};