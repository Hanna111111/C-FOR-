#include <iostream>
#include <cmath>
using namespace std;
/*
For13◦. Дано целое число N (> 0). 
Найти значение выражения
1.1 − 1.2 + 1.3 − . . .
(N слагаемых, знаки чередуются). 
Условный оператор не использовать.
*/


int main()
{
    int N;
    cout << "Please, enter N: " << endl;
    cin >> N;
    
    
    
    float result = 0;
    
    for (int i = 1; i < N; i++) {
        result += pow(-1,i+1)*(1.0+(float)i/10);
        
    }
    cout << "Result: " << result << endl;
    
    return 0;
}
