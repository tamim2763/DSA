#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n) {

    for (int i=1;i<n;i++) {

        int current = arr[i];
        int prev = i - 1;

        while (prev>=0 && current < arr[prev]) {
            arr[prev+1] = arr[prev];
            prev = prev - 1;
        }

        arr[prev+1] = current;
        
    }

}

int main () {

    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr,n);


    for (auto i: arr) {
        cout << i << " ";
    }
    
    
    return 0;
}