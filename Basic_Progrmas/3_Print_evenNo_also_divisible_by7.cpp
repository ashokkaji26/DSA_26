// Print Those even numbers from 1 to N, which are also divisible by 7.

#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    for( int cntr = 2; cntr <= N; cntr+=2 ) {

        if ( cntr % 7 == 0 ) {
            cout << cntr << " ";
        }else {
            continue;
        }
    }
    return 0;
}