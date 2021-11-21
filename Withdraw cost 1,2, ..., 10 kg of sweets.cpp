#include <iostream>
using namespace std;
/*
For4. A real number is given - the price of 1 kg of sweets. Withdraw cost 1,2, ..., 10 kg of sweets.
*/
int
main ()
{
  float A;

  cout << "Cost of the sweets: " << endl;
  cin >> A;

  for (int i = 1; i <= 10; i++)
    {
      cout << i << " sweets " << i * A << endl;
    }

  return 0;
}
