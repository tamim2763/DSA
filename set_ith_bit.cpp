#include<bits/stdc++.h>
using namespace std;

void setIthBit(int &n, int i) {
    int mask = (1<<i);
    n = n | mask;
}

void unsetIthBit (int &n, int i) {
    int mask = (1<<i);
    n = n ^ mask;
}

void clearIthBit (int &n,int i) {
    int mask = ~(1<<i);
    n = n & mask;
}

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,i;
    cin >> n >> i;
    setIthBit(n,i);

    cout << n << endl;

    clearIthBit(n,i);

    cout << n << endl;



    
    return 0;
}