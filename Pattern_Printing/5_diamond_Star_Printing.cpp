// Print diamond star pattern.

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    // upper part 
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= n - i; j++ ) { // spaces
            cout << " ";
        }
        for ( int j = 1; j < 2 * i; j++ ) { // stars
            cout << "*";
        }
        cout << endl;      
    }
    //lower part
        for ( int k = 1; k < n; k++ ) {
            for ( int l = 1; l <= k; l++ ) { // spaces
                cout << " ";
            }
            for ( int l = 1; l <= ((n -k) * 2) -1; l++ ){ //  stars
                cout << "*";
            }
            cout <<endl;
        }
    return 0;
}