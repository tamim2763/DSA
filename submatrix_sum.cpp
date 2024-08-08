#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> computePrefixSum(const vector<vector<int>>& v) {
    int rows = v.size();
    int cols = v[0].size();

    vector<vector<int>> ans(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            ans[i][j] = v[i][j];
            if (i > 0) {
                ans[i][j] += ans[i - 1][j];
            }
            if (j > 0) {
                ans[i][j] += ans[i][j - 1];
            }
            if (i > 0 && j > 0) {
                ans[i][j] -= ans[i - 1][j - 1];
            }
        }
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    vector<vector<int>> prefixSum = computePrefixSum(grid);

    int query;
    cin >> query;

    while (query--) {
        int sr, sc, er, ec;
        cin >> sr >> sc >> er >> ec;

        // Adjusting the 1-based indexing to 0-based indexing if required
        sr--; sc--; er--; ec--;

        int sum = prefixSum[er][ec];

        if (sc > 0) {
            sum -= prefixSum[er][sc - 1];
        }

        if (sr > 0) {
            sum -= prefixSum[sr - 1][ec];
        }

        if (sr > 0 && sc > 0) {
            sum += prefixSum[sr - 1][sc - 1];
        }

        cout << sum << endl;
    }

    return 0;
}
