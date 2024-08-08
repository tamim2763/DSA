#include<bits/stdc++.h>
using namespace std;

void clearRangeOfBits (int &n,int i,int j) {
    int mask1 = (-1<<j);
    int mask2 = (1<<(i-1)) - 1;
    int mask = mask1 | mask2;
    n = n & mask;
}

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,i,j;
    cin >> n >> i >> j;

    clearRangeOfBits(n,i,j);

    cout << n << endl;




    
    return 0;
}