#include<bits/stdc++.h>
using namespace std;

bool get_ith_bit (int n,int i) {
    int mask = (1<<i);
    return (n & mask); // if int then return ((n & mask)>0) ? 1 : 0
}

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,i;
    cin >> n >> i;

    cout << get_ith_bit(n,i) << endl;   





    
    return 0;
}