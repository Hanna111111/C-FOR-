/*For21. Дано целое число N (> 0). 
Используя один цикл, найти сумму
1 + 1/(1!) + 1/(2!) + 1/(3!) + ... + 1/(N!)
(выражение N! — N–факториал — обозначает произведение всех целых чисел от 1 до N: N! = 1·2·...·N). 
Полученное число является приближенным значением константы e = exp(1).*/

#include <iostream>
using namespace std;

int
main ()
{
  int N;
  cout << "Enter N: " << endl;
  cin >> N;

  int factoria = 1, result = 1;

  for (int i = 1; i <= N; i++)
    {
      factoria *= i;
      result += 1 / factoria;
    }

  cout << "Factorial of: " << N << " is: " << factoria << endl;
  cout << "The result: " << result << endl;
  return 0;
}
