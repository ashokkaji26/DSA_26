// Print the table of a given number.

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for ( int cntr = 1; cntr <= 10; cntr++ ) {
        cout << n << " X " << cntr << " = " << n * cntr <<endl;
    }
    
    return 0;
}