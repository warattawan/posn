#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,temp;
    cin >> a >> b;
    if (a>b) {
        temp = b;
        b=a;
        a=temp;
    }
    int x = a; 
    while (b%a>0) {
        temp = x;
        a = b%a;
        b = temp;
        
    }
    cout << a;
}