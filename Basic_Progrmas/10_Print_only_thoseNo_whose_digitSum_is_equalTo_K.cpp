// Given a value of N, Print only those numbers from 1 to N, that have sum of digits = K
// Good beginner friendly question.
#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;
    int k = 3;

    for ( int i = 1; i <= N; i++ ) {
        int digit_sum = 0;
        for(int j = i; j > 0; j /= 10 ) {
            digit_sum += j % 10;
        }

        if(digit_sum == k) {
            cout << i <<endl;
        }else{
            continue;
        }
    }
    return 0;
}