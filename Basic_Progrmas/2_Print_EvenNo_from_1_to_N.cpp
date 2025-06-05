#include <iostream>
using namespace std;

int main() {

    int n;
    cin>> n;

    for( int cntr = 2; cntr <= n; cntr+=2 ) {
        cout << cntr << " ";
    }
    
    return 0;
}