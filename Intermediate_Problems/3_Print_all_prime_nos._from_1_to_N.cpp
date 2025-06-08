// Print all prime numbers from 1 to N.
#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    for( int i = 2; i <= N; i++ ) {

        int is_Prime = 1;

        for( int j = 2; j < i; j++ ) {
            if( i % j == 0 ) {
                is_Prime = 0;
                break;
            }
        }
        if ( is_Prime == 1 ) {
            cout << i <<endl;
        }
        
    }
    return 0;
}