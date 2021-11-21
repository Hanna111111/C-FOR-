/*
Integers K and N (N> 0) are given. Print N times the number K.
*/
#include <iostream>
using namespace std;
int
main ()
{
  int K, N;
  cout << "Please, enter K: " << endl;
  cin >> K;

  cout << "Please, enter N: " << endl;
  cin >> N;

  for (int i = 0; i < N; ++i)
  {
    cout << K << " ";
  }
}
