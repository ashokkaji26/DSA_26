// check if a given no. is prime or not ?
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if ( n <= 1 ) {
        cout << "Not Prime.\n";
    }else {
        int is_Prime = 1;
        for ( int i = 2; i<n; i++ ) {
            if( n % i == 0 ) {
                cout << "Not prime.\n";
                is_Prime = 0;
                break;
        }
    }
        if(is_Prime == 1 ) {
            cout << "Prime.\n";
        }
    }
    return 0;
}