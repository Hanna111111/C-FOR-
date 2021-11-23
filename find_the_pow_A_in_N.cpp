#include <iostream>
#include <cmath>
using namespace std;

/*
For16◦. Дано вещественное число A и целое число N (>0).
Используя один цикл, вывести все целые степени числа A от 1 до N.
*/

int main()
{
    float A;
    cout << "A: " << endl;
    cin >> A;
    
    int N;
    cout << "N: " << endl;
    cin >> N;
    
    float result=1;
    
    for (int i = 1; i < N; i++) {
        result *= A;
        cout << "Result: " << result << " ";
    }
    
    

    return 0;
}
