/*
For40. Integers A and B are given (A <B). Print all integers from A to B inclusive;
in this case, the number A should be displayed 1 time, the number A + 1 should be displayed 2 times, etc.
*/
#include <iostream>
using namespace std;

int main()
{
    int A,B;
    
    cout << "Please, enter A: " << endl;
    cin >> A;
    
    cout << "Please, enter B: " << endl;
    cin >> B;
    
    for (int i = A; i < B; i++) {
        for (int j = 0; j < i - A; j++) {
            cout << i << " ";
        }
    }
    return 0;
}
