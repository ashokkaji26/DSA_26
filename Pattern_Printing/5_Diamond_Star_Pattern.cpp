// Print Diamond star pattern using stars(*).
// DBM

#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for ( int i = 1; i <= n; i++ ) { // Upper part

        for ( int j = 1; j <= n - i; j++ ) { // first spaces
            cout << " ";
        }
        for ( int j = 1; j <= i; j++ ) { // frits stars
            cout << "*";
        }
        for ( int j = 1; j < i; j++ ) { // 2nd stars
            cout << "*";
        }
        for ( int j = 1; j <= n - i; j++ ) { // 2nd spaces
            cout << " ";
        }

        cout << endl;
    }

    for ( int k = 1; k < n; k++ ) { // Lower part

        for ( int l = 1; l <= k; l++ ) { // 1st spaces
            cout << " ";
        }
        for ( int l = 1; l <= n - k; l++ ) { // 1st stars
            cout << "*";
        }
        for ( int l = 1; l <= n - k - 1; l++ ) { // 2nd stars
            cout << "*";
        }
        for ( int l =1 ; l <= n - k; l++ ) { // 2nd spaces
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}