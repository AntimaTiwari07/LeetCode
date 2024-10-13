class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;  // To store the results

        // Iterate over each subarray of size 'k'
        for (int i = 0; i <= nums.size() - k; i++) {
            vector<vector<int>> freqVec(51, vector<int>(2, 0));  // 2D vector to store number and its frequency (size 51 because 1 <= nums[i] <= 50)

            // Fill the frequency array for the current subarray of size 'k'
            for (int j = i; j < i + k; j++) {
                int num = nums[j];
                freqVec[num][0] = num;  // First column stores the number
                freqVec[num][1]++;      // Second column stores the frequency
            }

            // Remove numbers with frequency 0 and sort by frequency and value
            vector<vector<int>> validFreqVec;
            for (int j = 1; j <= 50; j++) {
                if (freqVec[j][1] > 0) {
                    validFreqVec.push_back(freqVec[j]);  // Only include numbers with frequency > 0
                }
            }

            // Sort by frequency in descending order, if frequency is the same, prioritize larger number
            sort(validFreqVec.begin(), validFreqVec.end(), [](vector<int>& a, vector<int>& b) {
                if (a[1] == b[1]) return a[0] > b[0];  // If frequencies are equal, prioritize larger number
                return a[1] > b[1];  // Otherwise, prioritize by frequency
            });

            // Calculate the x-sum of the top 'x' most frequent elements
            int sum = 0;
            for (int j = 0; j < min(x, (int)validFreqVec.size()); j++) {
                sum += validFreqVec[j][0] * validFreqVec[j][1];  // Add number * its frequency
            }

            ans.push_back(sum);  // Store the sum in the answer array
        }

        return ans;  // Return the final answer
    }
};