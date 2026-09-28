#include <bits/stdc++.h>
using namespace std ;
int main() {
    string n, m ;
    string text = "" ;
    getline(cin, n) ;
    for (int i=0; i<n.size(); i++) {
        if (n[i] == ' ') {
        } else {
            text += n[i] ;
        }
    }
    cin >> m ;
    string *p ;
    p = &m ;
    int indx = text.find(*p) ;
    cout << "Index : " << indx ;
}