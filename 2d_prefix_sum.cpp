#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> prefix_sum(const vector<vector<int>>&grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    vector<vector<int>>ans(rows,vector<int>(cols,0));

    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            ans[i][j] = grid[i][j];

            if (i>0) {
                ans[i][j] += ans[i-1][j];
            }

            if (j>0) {
                ans[i][j] += ans[i][j-1];
            }

            if (i>0 and j>0) {
                ans[i][j] -= ans[i-1][j-1];
            }
        }
    }

    return ans;
}

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    vector<vector<int>> arr = {
        {0,1,1,0,0,0},
        {1,0,0,1,1,0},
        {0,1,0,0,0,0},
        {0,1,1,0,0,1},
        {1,0,0,1,1,0},
        {0,1,0,0,0,0}
    };

    

    vector<vector<int>>res = prefix_sum(arr);



    for (int i=0;i<6;i++) {
        for (int j=0;j<6;j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }






    
    return 0;
}