/* Question :-
Given a number n, iterate i = 1 to n.
Print "FizzBuzz" if i is multiple of both 3 and 5;
print "Fizz" if i is a multiple of 3 only;
print "Buzz" if i is a multiple of 5 only;
Otherwise print the value of i;
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++ ) {
        if((i % 3 == 0) && (i % 5 == 0)) {
            cout << "FizzBuzz\n";
        }else if( i % 3 == 0 ) {
            cout << "Fizz\n";
        }else if( i % 5 == 0 ) {
            cout << "Buzz\n";
        }else {
            cout << i <<endl;
        }
    }
    return 0;
}



