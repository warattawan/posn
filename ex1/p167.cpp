#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string text;
    getline(cin, text);

    for (char &i:text) {
        if (isupper(i)) {
            int num_t = 155 - (int)i;
            i = (char)num_t;
        } else if (islower(i)) {
            int num_t = 219 - (int)i ;
            i = (char)num_t;
        }
    }
    cout << text;
}