#include<bits/stdc++.h>
using namespace std;

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int arr[][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    int key;
    cin >> key;

    int n=4;

    int i = 0, j = n-1;
    bool flag=0;

    int x,y;
    while (j>=0 and i<n) {
        if (arr[i][j]==key) {
            flag=1;
            x = i;
            y = j;
            break;
        }
        else if (arr[i][j]>key) {
            j--;
        }
        else {
            i++;
        }
    }

    if (flag) {
        cout << x << " " << y;
    } else {
        cout << "not present";
    }

    // another approach can be binary search that will take O(nlogm)
    // for (int i=0;i<n;i++) {
    //     int l = 0,h=n-1;
    //     while (l<=h) {
    //         int mid = (l+h)/2;
    //         if (arr[i][mid]==key) {
    //             flag=1;
    //             x=i;
    //             y=mid;
    //             break;
    //         }
    //         else if (arr[i][mid]>key) {
    //             h = mid-1;
    //         }
    //         else {
    //             l = mid + 1;
    //         }
    //     }
    // }
    // if (flag) {
    //     cout << x << " " << y;
    // } else {
    //     cout << "not present";
    // }
    
    return 0;
}