class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {0};

        for (int x : stones) {
            cnt[x % 3]++;
        }

        // If there are no stones with remainder 1 or 2,
        // Alice immediately loses.
        if (cnt[1] == 0 && cnt[2] == 0)
            return false;

        // If cnt[0] is even, Alice wins iff both
        // remainder groups are non-empty.
        if (cnt[0] % 2 == 0) {
            return cnt[1] > 0 && cnt[2] > 0;
        }

        // cnt[0] is odd.
        // Alice wins if one remainder group has at least
        // two more stones than the other.
        return abs(cnt[1] - cnt[2]) > 2;
    }
};