// Find all the factors fo a given number.

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factors of " << n << " are : ";
    for ( int i = 1; i <= n; i++ ) {
        
        if ( n % i == 0 ) {
            cout << i << " ";
        }
    }

    return 0;
}