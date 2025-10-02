#include <iostream>
using namespace std;
int main()
{
    int num, i ;
    cin >> num ;
    for (i=1; i<=num; i++) {
        if (num==1) {
            cout << "Not Prime" ;
            break;
        }
        if (num % i == 0 && i != 1 && i!= num) {
            cout << "Not Prime" ;
            break;
        } else if (i == num) {
            cout << "Prime" ;
        }
    }
}