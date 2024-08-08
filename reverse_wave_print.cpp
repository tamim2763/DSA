#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    int grid[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> grid[i][j];
        }
    }

    vector<int>ans;

    bool fl = 1;

    for (int j=m-1;j>=0;j--) {

        if (fl) {
            for (int i=0;i<n;i++) {
                ans.pb(grid[i][j]);
            }
            fl=0;
        }
        else {
            for (int i=n-1;i>=0;i--) {
                ans.pb(grid[i][j]);
            }
            fl=1;
        }

    }

    for (auto i: ans) cout << i << " ";




    
    return 0;
}