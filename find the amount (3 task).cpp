/*
For38. An integer N (> 0) is given. Find the amount
1N + 2N − 1 + ... + N1.
To avoid integer overflow,
calculate the terms of this sum using a real variable
and output the result as a real number.
*/
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter N: " << endl;
    cin >> N;
    
    float result = 0,another;
    
    for (int i = 0; i <= N; i++) {
        another = i;
        for (int j = 0; j <= N - i; j++) {
            another *=i;
            result +=another;
        }
    }
    cout << "Result: " << result << endl;
    
    return 0;
}
