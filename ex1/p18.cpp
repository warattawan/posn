#include <iostream>
using namespace std;
int main()
{
    int num, i ;
    i = 1 ;
    cin >> num ;
    do {
        if (num==1) {
            cout << "n" ;
            break;
        }
        if (num % i == 0 && i != 1 && i!= num) {
            cout << "n" ;
            break;
        } else if (i == num) {
            cout << "y" ;
        }
        i++ ;
    } while (i<=num);
}