#include <iostream>
#include <cmath>
using namespace std;

/*
For8. Даны два целых числа A и B (A < B). 
Найти произведение всех целых чисел от A до B включительно.
*/

int main()
{
    int A,B;
    int result = 1;

  cout << "Please, enter A: " << endl;
  cin >> A;
  
  cout << "Please, enter B: " << endl;
  cin >> B;
  
  if(A<B){
  for (int i = A; i <= B; i++){
      result *=i;
      
  }
  cout << result << " \t";
}

    return 0;
}
