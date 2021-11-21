/*
For9. Даны два целых числа A и B (A < B).
Найти сумму квадратов всех целых чисел от A до B включительно.
*/

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int A,B,sum;
    sum = 0;
    cout << "Enter the A:" << endl;
    cin>>A;
    
    cout << "Enter the B:" << endl;
    cin>>B;
    
    for(int i = A; i <= B; i++){
       // cout << " 1: "<< pow(i,2) << endl;
        sum+=i * i;
        
    }
    cout << "Result: " << sum << endl;
    return 0;
    
}
