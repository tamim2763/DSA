#include<bits/stdc++.h>
using namespace std;

void clearIthBit (int &n,int i) {
    int mask = ~(1<<i);
    n = n & mask;
}

void updateIthBit (int &n,int i, int val) {
    clearIthBit(n,i);
    int mask = (val<<i);
    n = n | mask;
}

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    // n is the number, i is the position, val is either 1 or 0 set or unset ith bit respectively

    int n,i,val;
    cin >> n >> i >> val;

    updateIthBit(n,i,val);

    cout << n << endl;



    
    return 0;
}