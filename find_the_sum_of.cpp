#include <iostream>
#include <cmath>
using namespace std;

/*
For17. 
Дано вещественное число A и целое число N (>0).
Используя один цикл, найти сумму
1+A+A2 +A3 +...+AN.
*/

int main()
{
    
    float A;
    cout << "Enter A: " << endl;
    cin >> A;
    
    int N;
    cout << "Enter N: " << endl;
    cin >> N;
    
    float A2 = 1;
    float result = 1;
    
    for (int i = 1; i < N; i++) {
        A2 *= A;
        result += A2;
    }
    
    cout << "Result: " << result <<endl;
    

    return 0;
}
