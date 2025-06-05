// Find the sum of all the digits of a given number.

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int original_Num = n;
    int count = 0;
    int digits_Sum = 0;
    int remainder;

    // Method - 1
    while(n > 0 ) {
        remainder = n % 10;
        digits_Sum += remainder;
        n /= 10;
        count++;

    // }

    // Method - 2
    // for(int i = n; i > 0; i /= 10 ) {
    //     remainder = n % 10;
    //     digits_Sum += remainder;
    //     n /= 10;
    //     count++;
    // }

    cout << "No. of digits in " <<original_Num << " is: " << count <<endl;
    cout << "Sum of digits of " << original_Num << " is: " << digits_Sum <<endl;

    return 0;
}