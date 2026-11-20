class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if (p.size() > s.size())
            return ans;
        unordered_map<char, int> mp;
        unordered_map<char, int> ss;
        for (int i = 0; i < p.size(); i++) {
            mp[p[i]]++;
        }
        for (int i = 0; i < p.size(); i++) {
            ss[s[i]]++;
        }
        if (ss == mp)
            ans.push_back(0);
        for (int i = p.size(); i < s.size(); i++) {
            ss[s[i]]++;
            ss[s[i - p.size()]]--;

            if (ss[s[i - p.size()]] == 0) {
                ss.erase(s[i - p.size()]);
            }

            if (mp == ss) {
                ans.push_back(i - p.size() + 1);
            }
        }
        return ans;
    }
};