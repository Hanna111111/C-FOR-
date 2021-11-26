/*
For 36◦. Given positive integers N and K. 
Find the sum 1K + 2K + ... + NK.
To avoid integer overflow,
calculate summands using chemical information
and output the result as a real number.
*/

#include <iostream>
using namespace std;

int main()
{
    int N,K;
    cout<<"Please, enter N: " << endl;
    cin >> N;
    
    cout<<"Please, enter K: " << endl;
    cin >> K;
    
    float result = 0, another;
    
    int i,j;
    
    for ( i = 1; i <= N; i++) {
        another = i;
        for ( j = 1; j <= K; j++) {
            result+=another;
        }
    }
    cout << "Result: " << result << endl;
    return 0;
}
