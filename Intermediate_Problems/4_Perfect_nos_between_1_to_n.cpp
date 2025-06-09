// Given N, find all the perfect numbers between 1 and N.

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    cout << "Perfect numbers between 1 & " << n << " are : ";
    for ( int number = 1; number <= n; number++ ) {
        
        int proper_Divisors_Sum = 0;
        for ( int i = 1; i < number; i++ ) {
            if ( number % i == 0 ) {
                proper_Divisors_Sum += i;
            }
        }
        if ( proper_Divisors_Sum == number ) {
            cout << number << " ";
        }
    }
    return 0;
}