#include<bits/stdc++.h>
using namespace std;

void spiral_print(int grid[][100],int n,int m) {
    int start_row = 0;
    int end_row = n-1;
    int start_col = 0;
    int end_col = m-1;

    int ans[n][m];

    while (start_row<=end_row and start_col<=end_col) {

        // For start row
        for (int col=start_col;col<=end_col;col++) {
            cout << grid[start_row][col] << " ";
            // ans[start_row][col] = grid[start_row][col];
        }

        // For end column
        for (int row=start_row+1;row<=end_row;row++) {
            cout << grid[row][end_col] << " ";
            // ans[row][end_col] = grid[row][end_col];
        }

        // For end row
        for (int col=end_col-1;col>=start_col;col--) {
            if (start_row==end_row) {
                break;
            }
            cout << grid[end_row][col] << " ";
            // ans[end_row][col] = grid[end_row][col];
        }

        // For start column
        for (int row=end_row-1;row>=start_row+1;row--) {
            if (start_col==end_col) {
                break;
            }
            cout << grid[row][start_col] << " ";
            // ans[row][start_col] = grid[row][start_col];
        }

        start_row++;
        end_row--;
        start_col++;
        end_col--;

    }
}

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    int grid[n][100]; // the column size must be of fixed size as we are passing this 2d array to a function and that function should have an argument of 2d array of fixed size
    // so to avoid this sizing issue it's better to use vector as it allows dynamic memory allocation 
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> grid[i][j];
        }
    }

    spiral_print(grid,n,m);

    
    return 0;
}