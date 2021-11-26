#include <iostream>
using namespace std;
/*
For37. An integer N (> 0) is given. Find the amount
11 +22 + ... + NN.
To avoid integer overflow,
calculate the terms of this sum using a real variable
and output the result as a real number.
*/
int main()
{
   int N;
   cout << "Please, enter N: " << endl;
   cin >> N;
   
   float result = 0, another;
   
   for (int i = 0; i <= N; i++) {
       another = i;
       for (int j = 0; j <= i; j++) {
           result +=another;
       }
   }
   cout << "Result: " << result << endl;
    return 0;
}
