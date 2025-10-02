#include <bits/stdc++.h>
using namespace std;
int main()
{
    string email;
    cin >> email;
    int sign = email.find('@') ;
    if (sign==-1) {
        cout << "Invalid email format." ;
    } else {
        string username = email.substr(0,sign) ;
        cout << username << endl ;
        string domain = email.substr(sign+1) ;
        cout << domain << endl ;
    }
}