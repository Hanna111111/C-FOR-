#include <iostream>
#include <cmath>
using namespace std;

/*
For11. Дано целое число N (> 0). Найти сумму
N2 +(N+1)2 +(N+2)2 +...+(2·N)2
целое число
*/

int main()
{
    int N;
    float sum;
    
    cout << "Please, write the N:" << endl;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        sum += pow(N + i,2);
        
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
