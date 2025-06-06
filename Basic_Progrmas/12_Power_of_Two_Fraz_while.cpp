// WAP to check if a number is power of two or not ?

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    //int flag = 0;  // To know we exited while loop naturall or forcefully by break.
    // using flag is 2nd method to know natural or forcefull exit.
    // using n == 1 is 1st method to knnow natural or forcefull exit.

    while( n > 1 ) {
        if( n % 2 == 1 ) {
            cout << "Number is not power of 2.\n";
            //flag = 1;
            break;
        }
        n /= 2;
    }

    // M-1
    if ( n == 1 ) {
        cout << "Number is power of 2\n";
    }

    // M - 2
    // if( flag == 0 ) {
    //     cout << "Number is power of 2.\n";
    // }
    return 0;
}