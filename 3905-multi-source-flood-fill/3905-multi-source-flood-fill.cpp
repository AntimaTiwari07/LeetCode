class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        queue<pair<int, int>> q;
        vector<vector<int>> v(n, vector<int>(m, 0));
        for (int i = 0; i < sources.size(); i++) {
            swap(sources[i][0],sources[i][2]);
        }
        sort(sources.rbegin(),sources.rend());
        for(int i = 0;i<sources.size();i++){
            q.push({sources[i][2], sources[i][1]});
            v[sources[i][2]][sources[i][1]] = sources[i][0];
        }
        q.push({-1, -1});
        while (!q.empty()) {
            pair<int, int> p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;

            if (x == -1 && y == -1 && q.empty()) {
                break;
            } else if (x == -1 && y == -1 && !q.empty()) {
                q.push({-1, -1});
            } else {

                // left
                if (p.second - 1 >= 0 && v[p.first][p.second - 1] == 0) {
                    q.push({p.first, p.second - 1});
                    v[p.first][p.second - 1] =
                        max(v[p.first][p.second], v[p.first][p.second - 1]);
                }
                // right
                if (p.second + 1 < m && v[p.first][p.second + 1] == 0) {
                    q.push({p.first, p.second + 1});
                    v[p.first][p.second + 1] =
                        max(v[p.first][p.second], v[p.first][p.second + 1]);
                }
                // top
                if (x - 1 >= 0 && v[x - 1][y] == 0) {
                    q.push({x - 1, y});
                    v[x - 1][y] = max(v[x - 1][y], v[x][y]);
                }
                // bottom
                if (x + 1 < n && v[x + 1][y] == 0) {
                    q.push({x + 1, y});
                    v[x + 1][y] = max(v[x + 1][y], v[x][y]);
                }
            }
        }

        return v;
    }
};