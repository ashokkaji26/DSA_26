// solid Rectangle
// take input :- length(columns) and width(rows)

#include <iostream>
using namespace std;

int main() {

    int length,width;
    cout << "Enter length and width of Rectangle: ";
    cin >> length >> width;

    for ( int i = 1; i <= width; i++ ) {

        for ( int j = 1; j <= length; j++ ) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}



