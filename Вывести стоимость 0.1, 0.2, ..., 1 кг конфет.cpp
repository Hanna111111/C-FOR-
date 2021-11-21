#include <iostream>
using namespace std;

/*
For5◦. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1,
0.2, ..., 1 кг конфет.
*/

int
main ()
{
  float A;

  cout << "Cost of the sweets: " << endl;
  cin >> A;

  for (float i = 0.1; i < 1.1; i += 0.1){
      cout << i << " sweets " << i * A << endl;
      
  }

  return 0;
}
