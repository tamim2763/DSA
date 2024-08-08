#include <bits/stdc++.h>
using namespace std;

vector<int> spiral_print(const vector<vector<int>>& grid, int n, int m) {
    int start_row = 0;
    int end_row = n - 1;
    int start_col = 0;
    int end_col = m - 1;

    vector<int> ans;
    
    while (start_row <= end_row && start_col <= end_col) {
        // For start row
        for (int col = start_col; col <= end_col; col++) {
            ans.push_back(grid[start_row][col]);
        }

        // For end column
        for (int row = start_row + 1; row <= end_row; row++) {
            ans.push_back(grid[row][end_col]);
        }

        // For end row
        for (int col = end_col - 1; col >= start_col; col--) {
            if (start_row == end_row) {
                break;
            }
            ans.push_back(grid[end_row][col]);
        }

        // For start column
        for (int row = end_row - 1; row > start_row; row--) {
            if (start_col == end_col) {
                break;
            }
            ans.push_back(grid[row][start_col]);
        }

        start_row++;
        end_row--;
        start_col++;
        end_col--;
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> result = spiral_print(arr, n, m);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
