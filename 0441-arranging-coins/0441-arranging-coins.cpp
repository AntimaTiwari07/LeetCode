class Solution {
public:
    int arrangeCoins(int n) {
        int start = 1; // Starting from the first row
        int end = n;   // The maximum possible rows can't be more than n
        int mid;

        while (start <= end) {
            mid = start + (end - start) / 2; // Midpoint for binary search
            long long x = (long long)mid * (mid + 1) / 2; // Total coins needed for `mid` rows
            
            if (x == n) {
                return mid; // Exact match, we can use all `n` coins to form `mid` rows
            } else if (x < n) {
                start = mid + 1; // We can potentially add more rows
            } else {
                end = mid - 1; // We need to reduce the number of rows
            }
        }

        return end; // The maximum number of complete rows we can form
    }
};
