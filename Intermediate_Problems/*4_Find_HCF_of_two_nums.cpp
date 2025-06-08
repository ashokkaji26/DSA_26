// Find HCF of two numbers.
// Good Question :- Done by myself.

#include <iostream>
using namespace std;

int main () {

    int num_1, num_2;
    cout << "Enter two numbers: ";
    cin >> num_1 >> num_2;

    int smaller_Num;   // check smaller number.
    num_1 >= num_2 ? smaller_Num = num_2 : smaller_Num = num_1;

    int HCF;

    for ( int i = 1; i <= smaller_Num; i++ ) {
        if ( num_1 % i == 0 && num_2 % i == 0 ){
            HCF = i;
        }
    }

    cout << "HCF of " << num_1 << " & " << num_2 << " are : " << HCF <<endl;
    
    return 0;
}