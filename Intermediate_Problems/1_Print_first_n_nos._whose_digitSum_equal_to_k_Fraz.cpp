// Print first n numbers that have digit sum equal to k.
// Method - 2 by Fraz bhaiya

#include <iostream>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int counter = 0;
    int number = 1;

    while ( counter < n ) {
        int digit_Sum = 0;
    for ( int rem_num = number; rem_num > 0; rem_num /= 10 ) {
        digit_Sum = digit_Sum + rem_num % 10;
        rem_num = rem_num / 10;
    }
    if ( digit_Sum == k ) {
        cout << "Digit sum of " << number << " is equal to " << k <<endl;
        counter++;
    }
    number++;
    }
    return 0;
}