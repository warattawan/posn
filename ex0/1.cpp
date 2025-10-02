#include <iostream> 
using namespace std ;
int main()
{
    int money,a,b,c,d,x,y,z,p,q ;
    cout << "enter money : " ;
    cin >> money ;
    x = money/1000;             //แบงค์1000
    a = money-x*1000; 
    y = a/500;                  //แบงค์500
    b = a-y*500;
    z = b/100;                  //แบงค์100
    c = b-z*100;  
    p = c/50;                   //แบงค์50
    d = c-p*50;
    q = d/20;                   //แบงค์20
    cout <<  x + y + z + p + q ;
}