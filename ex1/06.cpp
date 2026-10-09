#include <bits/stdc++.h>
using namespace std;
int main() {
    string text,word="",x;
    cin >> text;
    vector<string> list;
    for (int i=0; i<text.size(); i++) {
        if (text[i]=='[' || text[i]==']') {
            list.push_back(word);
            word=text[i];
        } else word+=text[i];
        if (i==text.size()-1) list.push_back(word);
    }
    string f_text=list[0];
    for (int i=1; i<list.size(); i++) {
        if (list[i][0] == '[') {
            f_text.insert(0,list[i].substr(1));
        } else if (list[i][0] == ']') {
            f_text += list[i].substr(1);
        }
    }
    cout << f_text;
}