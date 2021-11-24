#include <iostream>
using namespace std;
/*
For19◦. Дано целое число N (> 0). Найти произведение
(целое число).
 N! = 1·2·...·N
(N–факториал). 
Чтобы избежать целочисленного переполнения,
вычислять это произведение с помощью вещественной переменной 
и вывести
его как вещественное число.
*/

int main()
{
    int  N = 1;
    cout << "Please, enter N: " << endl;
    cin >> N;
    
    int result = 1;
    
    
    
    for (int i = 1; i <= N; i++) {
        result*=i;
        
    }
cout << "Factorial: "<<result << " ";
    return 0;
}
