// Check if a given no. is power of 2 or not ?
// Program is valid for input 1 and greater than 1.
// 90 minutes

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    if(n == 1) {
        cout << " 1 is power of 2.\n";
        return 0;
    }else {
        if(n % 2 != 0 ) {
            cout << n << " is not a power of 2.\n";
            return 0;
        }else {
            float i = n;
            while(i > 0 ) {
                if( i == 1 ) {
                    cout << n << " is power of 2\n";
                    return 0;
                }
                i /= 2;
            }
            int j = n;
            while(j > 0 ) {
                j /= 2;
                if ( j % 2 != 0 ) {
                    cout << n << " is not a power of 2.\n";
                    return 0;
                }else {
                    continue;
                }
            }
        }
    }
    return 0;
}