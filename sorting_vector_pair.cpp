#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int n = v.size();
    // your code goes here
    
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (v[j].first>v[j+1].first) {
                swap(v[j],v[j+1]);
            }
            else if (v[j].first==v[j+1].first) {
                if (v[j].second>v[j+1].second) {
                    swap(v[j],v[j+1]);
                }
            }
        }
    }
    return v;
    
}

int main () {

    vector<pair<int,int>> v = {{3,4}, {2,3}, {3,7}, {1,5}, {3,4}} ;

    v = sortCartesian(v);

    for (auto [a,b]: v) {
        cout << a << "," << b << " ";
    }





}