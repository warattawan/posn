#include <iostream>
using namespace std;
int main()
{
    int N, e, o, i;
    e = 0 ;
    o = 0 ;
    i = 1 ;
    cin >> N ;
    do { 
        if (i % 2 == 0) {
            e++ ;
        } else {
            o++ ;
        }
        i ++ ;
    } while (i<=N) ;
    cout << "e: " << e << ",o: " << o ;
}