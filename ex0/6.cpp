#include <iostream> 
using namespace std ;
int main()
{
    float price,vat ;
    cin >> price ;
    vat = price * 7/100 ;
    cout << "vat7% : " << vat << " Baht" << '\n' ;
    cout << "total : " << vat+price << " Baht" ;
}