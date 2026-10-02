#include <bits/stdc++.h>
using namespace std;
int main()
{
    string FULLname, x;
    getline(cin,FULLname) ;
    stringstream ss(FULLname);
    vector<string> word;
    while (ss >> x) word.push_back(x);
    for (string c : word) {
        if (isupper(c[0])) cout << c[0];
    }
}