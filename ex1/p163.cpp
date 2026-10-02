#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text, newtext = "";
    bool Palind = true;
    getline(cin, text);
    for (char &i : text) {
        if (isalpha(i)) {
            newtext += tolower(i);
        }
    }
    int n = newtext.size();
    for (int i=0; i<n/2; i++) {
        if (newtext[i] != newtext[n-1-i]) {
            Palind = false;
            break;
        }
    }
    if (Palind) cout << "YES";
    else cout << "NO";
}