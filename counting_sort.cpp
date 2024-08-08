#include<bits/stdc++.h>
using namespace std;

void counting_sort(int arr[],int n) {

    // finding the largest element to know the range

    int largest = INT_MIN;

    for (int i=0;i<n;i++) {
        if (arr[i]>largest) {
            largest = arr[i];
        }
    }

    int freq[largest+1]={0}; //vector<int>freq(largest+1,0);
    for (int i=0;i<n;i++) {
        freq[arr[i]]++;
    }

    // putting the elements back to the original array
    int j = 0;
    for (int i=0;i<largest+1;i++) { // we need to include the largest element also that's why largest+1
        while (freq[i]>0) {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
}

// time complexity: O(n + largest)

int main () {

    int arr[] = {3,4,100,5,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);


    counting_sort(arr,n);

    for (auto i: arr) {
        cout << i << " ";
    }


    
    return 0;
}