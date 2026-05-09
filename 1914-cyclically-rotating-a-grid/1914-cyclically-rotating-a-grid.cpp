class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int row1 = 0;
        int row2 = m - 1;
        int col1 = 0;
        int col2 = n - 1;
        vector<vector<int>> ans(m, vector<int>(n));
        while (row1 < row2 && col1 < col2) {
            cout << " row = " << row1 << endl;
            vector<int> v;
            // down
            for (int i = row1; i <= row2; i++) {
                cout << grid[i][col1] << " ";
                v.push_back(grid[i][col1]);
            }
            // right
            for (int i = col1 + 1; i <= col2; i++) {
                cout << grid[row2][i] << " ";
                v.push_back(grid[row2][i]);
            }
            // up
            for (int i = row2 - 1; i >= row1; i--) {
                cout << grid[i][col2] << " ";
                v.push_back(grid[i][col2]);
            }

            // left
            for (int i = col2 - 1; i > col1; i--) {
                cout << grid[row1][i] << " ";
                v.push_back(grid[row1][i]);
            }
            cout << endl;
            // rotate by k
            int x = (row2 - row1) + 1;
            int y = (col2 - col1) + 1;
            int cnt = 0;
            int kk = k;
            int len = (x * 2 + y * 2) - 4;

            kk %= len;

             cnt = len - kk;
            vector<int> temp(v.begin() + cnt, v.end());
            for (int i = 0; i < cnt; i++) {
                temp.push_back(v[i]);
            }

            //
            int idx = 0;
            // down
            for (int i = row1; i <= row2; i++) {
                ans[i][col1] = temp[idx++];
            }
            // right
            for (int i = col1 + 1; i <= col2; i++) {

                ans[row2][i] = temp[idx++];
            }
            // up
            for (int i = row2 - 1; i >= row1; i--) {

                ans[i][col2] = temp[idx++];
            }

            // left
            for (int i = col2 - 1; i > col1; i--) {

                ans[row1][i] = temp[idx++];
            }
            row1 += 1;
            row2 -= 1;
            col1 += 1;
            col2 -= 1;
        }
        return ans;
    }
};