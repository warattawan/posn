#include <iostream>
using namespace std;
int main()
{
    int price, paid, change, coin, x, y, z, p, q, a, b, c, d;
    int count = 0 ;
    cin >> price >> paid;
    if (paid < price) {
        cout << "no money";
    }
    if (paid == price) {
        cout << "no change";
    }
    if (paid > price) {
        change = paid-price ;
        x = change/1000;            
        a = change-x*1000; 
        y = a/500;  
        b = a-y*500;
        z = b/100; 
        c = b-z*100;  
        p = c/50;
        d = c-p*50;
        q = d/20;
        coin = d-q*20;
        cout << "1000 = " << x << endl ;
        cout << "500 = " << y << endl ;
        cout << "100 = " << z << endl ;
        cout << "50 = " << p << endl ;
        cout << "20 = " << q << endl ;
        cout <<"coin = "<< coin << endl ;
    }
}