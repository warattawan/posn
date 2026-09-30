#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string text;
    cin >> text;
    vector<string> list;
    vector<char> list_new;
    for (int i=0; i<text.size(); i++) {
        if (text[i] == '%') list.push_back(text.substr(i+1,2));
    }
    for (string x : list) {
        int y = stoi(x, nullptr, 16);
        list_new.push_back((char)y);
    }
    int count=0;
    for (int i=0; i<text.size(); i++) {
        if (text[i] == '%') {
            text.replace(i, 3, 1, list_new[count]);
            count++;
        }
    }
    cout << text;
}