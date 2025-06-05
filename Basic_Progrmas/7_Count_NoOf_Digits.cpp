// Take a number as input and print the number of digits in that number.

#include <iostream>
using namespace std;

int main () {

    int n;
    cin >> n;
    int original_num = n;

    int count = 0;

    // Method-1  This is more beginner friendly.
    while ( n > 0 ) {
        n = n / 10;
        count++;
    }

    // Method-2  Medium
    // for ( int i = n; i > 0; i /= 10 ) {
    //     count++;
    // }
    

    cout << "The no. of digits in " << original_num << " is:- " <<count <<endl;
    return 0;
}