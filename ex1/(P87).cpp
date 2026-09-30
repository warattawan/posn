#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string text;
    cin >> text; 
    int count_P=0, n=text.size()/2;
    for (int i=0; i<n; i++) {
        for (int j=text.size()-1; j>n; j--) {
            if (text[i]==text[j]) count_P++;
        }
    }
    cout << "Minimum Deletions: " << text.size() - count_P << '\n';
    cout << "(LPS): " << count_P;
} 