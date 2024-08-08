#include <bits/stdc++.h>
using namespace std;

void prefixSum(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i > 0) {
                grid[i][j] += grid[i - 1][j];
            }
            if (j > 0) {
                grid[i][j] += grid[i][j - 1];
            }
            if (i > 0 && j > 0) {
                grid[i][j] -= grid[i - 1][j - 1];
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));

    char ch;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ch;
            grid[i][j] = (ch == '#') ? 1 : 0;
        }
    }

    prefixSum(grid);

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            int q1 = grid[i][j];
            int q2 = grid[i][m - 1] - q1;
            int q3 = grid[n - 1][j] - q1;
            int q4 = grid[n - 1][m - 1] - q1 - q2 - q3;

            ans = max(ans, min({q1, q2, q3, q4}));
        }
    }

    cout << ans;

    return 0;
}

/*


Changes Made:

Remove const from the parameter in prefixSum:
This allows modifying the elements of the grid within the prefixSum function.

Correct the indices in the main loop for quadrant calculations:
Changed the loops to iterate up to n-1 and m-1 to avoid out-of-bounds errors.
Fixed the calculation of quadrants by using correct index values and avoiding out-of-bounds access.

Quadrant calculations:
q1 is the sum of elements in the first quadrant (top-left).
q2 is the sum of elements in the second quadrant (top-right) minus q1.
q3 is the sum of elements in the third quadrant (bottom-left) minus q1.
q4 is the sum of elements in the fourth quadrant (bottom-right) minus q1, q2, and q3.


*/