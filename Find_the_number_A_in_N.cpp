#include <iostream>
using namespace std;
#include <cmath>

/*
For15◦. 
Дано вещественное число A и целое число N (>0).
Найти A в степени N:
A(N) = A·A·...·A 
(числа A перемножаются N раз).
*/

int main()
{
    int N;
    cout << "Enter N: " << endl;
    cin >> N;
    
    float A;
    cout << "Enter A: " << endl;
    cin >> A;
    
    float result = 1;
    
    for (int i = 0; i < N; i++) {
        result *= A;
    }
    
    cout << "Result of A: " << result << endl;
    
    return 0;
}
