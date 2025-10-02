#include <iostream>
using namespace std ;
int x=11 ;
int main ()
{
    int x=22 ;
    {
        int x=33 ;
        cout << "a" << x << '\n' ;
        cout << "b" << ::x << '\n' ; //ปกติบรรทัดนี้จะไม่แสดงผล
    }
    cout << "c" << x << '\n' ;
    cout << "d" << ::x << '\n' ;
    return 0;
}