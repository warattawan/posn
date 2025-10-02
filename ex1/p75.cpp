#include <bits/stdc++.h>
using namespace std;
int main()
{
    string phone;
    cin >> phone;
    if (phone.size() == 10 && phone[0] == '0') {
        string new_phone = phone.substr(1,10) ;
        cout << "+66 (" << new_phone.substr(0,2) << ") " << new_phone.substr(2,3) << "-" << new_phone.substr(5);
    } else {
        cout << "Invalid Format" ;
    }
}