// Print first n numbers that have digit sum equal to k.
// Good Intermediate level question - DBM(done by myself).

#include <iostream>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;
    int counter = 0;

    int number = 1;
    while ( number > 0 ) {
        int digit_sum = 0;

        if ( counter == n ) {
            cout << "First " << n << " numbers have printed whose digit_sum equal to: " << k << endl;
            break;
        }

        for ( int j = number; j > 0; j /= 10 ) {
            digit_sum += j % 10;
        }

        if ( digit_sum == k ) {
            cout << "Digit sum of " << number << " is equal to: " << k << endl;
            counter++;
        }

        number++;
    }
    return 0;
}