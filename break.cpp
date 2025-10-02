#include <iostream> 
using namespace std ;
int main()
{
    int i, num, sum ;
    sum = 0 ;
    for (i=0; i<10; i++) {
        cin >> num ;
        if (num==0 || num<0) {
            cout << "Error" ;
            break ;
        }
        sum += num;
    }
    cout << sum ;

}