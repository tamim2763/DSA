#include<bits/stdc++.h>
using namespace std;

#define ll long long

void clearRange(ll &n,ll i,ll j) {
    ll mask1 = (1<<i) - 1;
    ll mask2 = ~((1<<(j+1))-1);
    ll mask = mask1 | mask2;
    n = n & mask;
}

void replaceBits(ll &n,ll m,ll i,ll j) {
    clearRange(n,i,j);
    ll mask = m << i;
    n = n | mask;
}

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    // we need to put m o n from the position i to j
    /*
        example:
        input: 
        n = 10000000000;
        m = 10101;
        i = 2, j = 6;
        output:
        10001010100
    */
    ll n = 1024; //10000000000
    ll m = 21; //10101
    ll i=2,j=6;
    // m = m << i;

    // cout << m << endl;

    // clearRange(n,i,j);

    // cout << n << endl;

    replaceBits(n,m,i,j);

    cout << n << endl;





    
    return 0;
}