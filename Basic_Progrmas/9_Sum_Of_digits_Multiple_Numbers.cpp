// Find the sum of digits of all numbers of given range. ex:- 830 to 845.
// good beginner friendly question.

#include <iostream>
using namespace std;

int main() {

    int first_Num, last_Num;
    cout << "Enter first and last Numbers (to specify range): ";
    cin >> first_Num >> last_Num;

    for(int i = first_Num; i <= last_Num; i++ ) {
        int digits_sum = 0;
        for(int j = i; j > 0; j /= 10 ) {
            digits_sum += j % 10;
        }
        cout << "Sum of digits of " << i << " is: " << digits_sum <<endl;
    }
    return 0;
}