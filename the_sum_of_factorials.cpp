/*
For20◦. Дано целое число N (> 0). Используя один цикл, найти сумму
1! + 2! + 3! + ... + N!
(выражение N! — N–факториал — обозначает произведение всех целых чисел от 1 до N: 
N! = 1·2·...·N). 
Чтобы избежать целочисленного переполнения, 
проводить вычисления с помощью вещественных переменных
и вывести результат как вещественное число.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Please, enter the number: " << endl;
    cin >> N;
    
    int factoria = 1;
    int result = 0;
    
    for (int i = 1; i <= N; i++) {
        factoria *=i;
        result +=factoria;
    }
cout << "Factorial of: "<< N << " is: " << factoria << endl;
cout << "The result of addition: " << result << endl;
    return 0;
}
