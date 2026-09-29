#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string a_z = "abcdefghijklmnopqrstuvwxyz", A_Z = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string text;
    int K;
    cin >> K;
    cin.ignore();
    getline(cin, text);

    K = K % 26;
    for (int i=0; i<text.size(); i++) {

        if (isupper(text[i])) {
            int pos = A_Z.find(text[i]);
            if (pos - K < 0) {
                text[i] = A_Z[26 + pos - K];
            } else text[i] = A_Z[pos - K];

        } else if (islower(text[i])) {
            int pos = a_z.find(text[i]);
            if (pos - K < 0) {
                text[i] = a_z[26 + pos - K];
            } else text[i] = a_z[pos - K];
        }
    }
    cout << text;
}