#include<bits/stdc++.h>
using namespace std;

pair<int,int> stairCaseSearch(int arr[][4],int n,int m,int key) {

    if (key<arr[0][0] or key>arr[n-1][m-1]) {
        return {-1,-1};
    }

    int i=0,j=m-1;

    while (i<n and j>=0) {
        if (arr[i][j]==key) {
            return {i,j};
        }
        else if (arr[i][j]<key) {
            i++;
        }
        else {
            j--;
        }
    }
    // if we haven't got any number matching the key
    return {-1,-1};

}

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int grid[4][4] = {
        {10,20,30,40},
        {50,60,70,80},
        {90,100,101,102},
        {103,104,105,106}
    };

    int n=4,m=4;

    int key;
    cin >> key;

    pair<int,int> ans = stairCaseSearch(grid,n,m,key);

    cout << ans.first << " " << ans.second;


    
    return 0;
}