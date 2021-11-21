#include <iostream>
using namespace std;

/*

For6. Дано вещественное число — цена 1 кг конфет.
Вывести стоимость 1.2,
1.4, ..., 2 кг конфет.

*/

int
main ()
{
  float A;

  cout << "Cost of the sweets: " << endl;
  cin >> A;

  for (float i = 1.2; i < 2; i += 0.2){
      cout << i << " sweets " << i * A << endl;
      
  }

  return 0;
}
