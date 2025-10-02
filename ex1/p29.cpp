#include <iostream>
using namespace std ;
int main()
{
    int n, count = 0;
    cin >> n;
    int a = 0, b = 1; 
    if (n == 1) {
        count++ ;          
    }
    if (n>=2) {
        count += 2;
        for (int i = 3; i <= n; ++i) {
            int c = a + b;        
            count++ ;
            a = b;
            b = c;
        }
    }          
    cout << count ;
}