#include<bits/stdc++.h>
using namespace std;

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>>pascal(n);

    for (int i=0;i<n;i++) {
        pascal[i].resize(i+1); // most important line, resizing the inner vector 
        for (int j=0;j<=i;j++) {
            if (j==0 or j==i) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<=i;j++) {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }



    
    return 0;
}