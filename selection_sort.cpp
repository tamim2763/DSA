#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n) {

    for (int i=0;i<n-1;i++) {

        int min_position = i;

        for (int j=i+1;j<n;j++) {

            if (arr[j]<arr[min_position]) {
                min_position = j;
            }

        }

        swap(arr[i],arr[min_position]);

    }

}

int main () {

    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    selection_sort(arr,n);

    for (auto i: arr) {
        cout << i << " ";
    }

    
    return 0;
}