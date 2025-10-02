#include <iostream>
using namespace std;
int main()
{
    int n,i,sum,count ;
    i = 1 ;
    count = 0 ;
    sum = 0 ;
    do {
        cin >> n ;
        if (n == -1) {
            i = 0 ;
        } else {
            sum += n ;
            count ++ ;
        }
    } while (i==1) ;
    cout << sum/count ;
}