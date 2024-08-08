#include<bits/stdc++.h>
using namespace std;

// method 1
void clearIbits (int &n,int i) {
    int mask = ~((1<<i)-1);
    n = n & (mask);
}

// method 2
void clearIBits (int &n,int i) {
    int mask = -1<<i;
    n = n & mask;
}

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,i;
    cin >> n >> i;

    clearIBits(n,i);

    cout << n << endl;






    
    return 0;
}