/* Print this pattern:-
for rows = 5 and columns = 5

12345
23456
34567
45678
56789

*/

#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter no. of rows & columns: ";
    cin >> rows >> columns;

// Method-1
    // for ( int row = 1; row <= rows; row++ ) { // For each row.

    //     int print = row;
    //     for ( int column = 1; column <= columns; column++ ) { // for each column.
    //         cout <<  print << " ";
    //         print++;
    //     }
    //     cout << endl;
    // }

// Method-2
    for (int row = 1; row <= rows; row++ ) {

        for ( int col = row; col <= ((row +columns) -1); col++ ) {
            cout << col << " ";
        }
        cout <<endl;
    }
    return 0;
}