#include<bits/stdc++.h>
using namespace std;

int main () {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    // NOTE: you must initialize the max size of the columns 
    char name[][10] = {
        "tamim",
        "tanjim",
        "nadim",
        "nehal",
        "sakib",
        "shihab",
        "grandmasr"
    };

    int i=6;
    cout << name[i] << endl; //will print the string at index 6

    cout << name[i][4] << endl; // will print the 4th character of ith string

    for (const auto &str : name) { // correct way to iterate over a 2d character array
        cout << str << endl;
    }

    // another way of initializing

    char name1[][10] = {
        {'t','a','m','i','m','\0'},
        {'t','a','m','i','m','\0'},
        {'t','a','m','i','m','\0'},
        {'t','a','m','i','m','\0'}
    };

    for (const auto &str: name1) {
        cout << str << endl;
    }







    
    return 0;
}