#include <iostream>
using namespace std;

/*
For7. You are given two integers A and B (A <B).
Find the sum of all integers from A to B inclusive.
*/


int
main ()
{
  int A,B;

  cout << "Please, enter A: " << endl;
  cin >> A;
  
  cout << "Please, enter B: " << endl;
  cin >> B;

if(A<B){
  for (A;A<=B; A++){
      cout << A << " \t";
      
  }
}

  return 0;
}
