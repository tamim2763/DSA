#include<bits/stdc++.h>
using namespace std;

bool compare (int a,int b) {
    return a > b;
}

int main () {

    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (compare(arr[j],arr[j+1])) {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for (auto i: arr) cout << i << " ";



    
    return 0;
}