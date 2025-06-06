// WAP to check if a number is power of 2 or not?
// using for loop.

#include <iostream>
using namespace std;

int main() {

    int n; 
    cin >> n;
    int checker = 0;  // to check natural exit from for loop.

    for(int i = n; i > 1; i /= 2 ) {
        if ( i % 2 == 1 ) {
            cout << "Number is not power of 2.\n";
            checker = i;
            break;
        }
    }
    if ( checker == 0 ) {
        cout << "Number is power of 2.\n";
    }
    return 0;
}