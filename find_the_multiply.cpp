#include <iostream>
using namespace std;
#include <cmath>
/*
For12◦. Дано целое число N (> 0). Найти произведение
1.1·1.2·1.3·...
(N сомножителей).
*/

int main()
{
    int N;
    cout << "N: " << " ";
    cin >> N;
    
    float mult = 1;
    float a = 1.1;
    
    for (int i = 1; i < N; i ++) {
        
        mult *= a;
        a +=0.1;
    }
    cout << "Result: " << mult << endl;

    return 0;
}
