// WAP to check if a given number is a perfect number or not.
// Perfect number :- x is a perfect number if the sum of its proper divisors is equal to x itself.
// proper divisors of 28 :- 1,2,4,7,14 ( not 28).

#include <iostream>
using namespace std;

int main () {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int proper_Divisors_Sum = 0;
    for ( int i = 1; i < num; i++ ) {
        if ( num % i == 0 ) {
            proper_Divisors_Sum += i;
        }
    }
    if ( proper_Divisors_Sum == num ) {
        cout << num << " is a perfect number.\n";
    }else {
        cout << num << " is not a perfect number.\n";
    }
}