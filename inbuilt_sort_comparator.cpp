#include<bits/stdc++.h>
using namespace std;

bool compare (int a,int b) {
    // cout << "comparing " << a << " " << "with " << b << endl;
    return a < b; // a < b will sort in ascending order and a > b will do in descending
}

int main () {

    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n); // arr+n is a pointer to the index after the last index

    for (auto i: arr) {
        cout << i << " ";
    }
    cout << endl;

    reverse(arr,arr+n);

    for (auto i: arr) {
        cout << i << " ";
    }
    cout << endl;

    // sorting using comparator

    sort(arr,arr+n,compare); // we are calling the compare function

    for (auto i: arr) {
        cout << i << " ";
    }
    cout << endl;

    // builting comparator: greater<int>() -> will sort the array in descending order

    sort(arr,arr+n,greater<int>());

    for (auto i: arr) {
        cout << i << " ";
    }
    cout << endl;




    
    return 0;
}