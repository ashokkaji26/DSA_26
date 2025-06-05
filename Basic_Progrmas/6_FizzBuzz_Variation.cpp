/* Question :-
Given a number n, iterate i = 1 to n.
Print "FizzBuzz" if i is multiple of both 3 and 5;
print "Fizz" if i is a multiple of 3 only;
print "Buzz" if i is a multiple of 5 only;
Otherwise print the value of i;

Note:- Stop printing once the sum of all printed i's becomes greater than 2*n.
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++ ) {
        if((i % 3 == 0) && (i % 5 == 0)) {
            cout << "FizzBuzz\n";
        }else if( i % 3 == 0 ) {
            cout << "Fizz\n";
        }else if( i % 5 == 0 ) {
            cout << "Buzz\n";
        }else {
            cout << i << " sum till here :- ";
            sum += i;
            cout << sum << endl;

        }

        if( sum > (2 * n)) {
            break;
        }
    }
    return 0;
}



