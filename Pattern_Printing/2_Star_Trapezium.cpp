// Print star trapezium 

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    for ( int i = 1; i<= n; i++ ) {

        int space_count = i - 1;
        int star_coutn = n;
        
        for ( int j = 1; j < i; j++ ) {
            cout << " ";
        }
        for ( int k = 1; k <= n; k++ ) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}