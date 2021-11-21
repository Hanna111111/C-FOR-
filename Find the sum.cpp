#include <iostream>
using namespace std;
#include <cmath>

/*
For10. Дано целое число N (> 0). Найти сумму
1 + 1/2 + 1/3 + . . . + 1/N
*/

int main()
{
    int N;
    cout << "Enter N: " << endl;
    cin>>N;
    
    float sum = 0;
    
    for (int i = 1; i < N; i++) {
        
        sum = sum + 1/(float)i;
        
    }
    cout << "Sum: " << sum <<endl;
    
    return 0;
}
