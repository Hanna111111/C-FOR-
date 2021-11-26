/ *
For39. Given positive integers A and B (A <B).
Print all integers from A to B inclusive;
in this case, each number must be displayed as many times,
what is its meaning (for example, the number 3 is displayed 3 times).
* /
#include <iostream>
using namespace std;


int main()
{
    int A, B;
    
    cout << "Please, enter A: " << endl;
    cin >> A;
    
    cout << "Please, enter B: " << endl;
    cin >> B;
    
    
    if( A < B ){
        
        for (int i = A; i < B; i++) {
            
            for (int j = 0; j < i ; j++) {
                cout << i << " ";
            }
        }
        
    }else{
        cout << "A should be fewer than B! " << endl;
    }

    return 0;
}
