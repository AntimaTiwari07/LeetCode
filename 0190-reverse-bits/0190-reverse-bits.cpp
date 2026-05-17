class Solution {
public:
    int reverseBits(int n) {
        string s = "";
        while (n != 0) {
            int rem = n % 2;
            s += to_string(rem);
            n /= 2;
        }
        reverse(s.begin(), s.end());
        cout<<s.size()<<endl;
        if (s.size() <= 32) {
            int x = 32 - s.size();
            string zero = string(x,'0');
            s = zero + s;
        }
        reverse(s.begin(),s.end());
        long long st = 1;
        int ans = 0;
        cout << s.size() << endl;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                ans += st;
            }
            st = st * 2;
        }
        return ans;
    }
};