#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text, x, nah, change, ans="";
    getline(cin, text);
    cin >> nah >> change;
    stringstream ss(text);
    vector<string> word;
    vector<char> nah_l;
    for (char b: nah) nah_l.push_back(tolower(b));
    sort(nah_l.begin(),nah_l.end());
    while (ss >> x) {
        vector<char> word_l;
        for (char d: x) word_l.push_back(tolower(d));
        sort(word_l.begin(),word_l.end());
        if (word_l==nah_l) ans += change;
        else ans += x;
        ans += " ";
    }
    cout << ans;
}