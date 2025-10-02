#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() 
{
    string text;
    int upper = 0, digit = 0;
    getline(cin, text);
    for (int i=0; i<text.size(); i++) {
        if (isupper(text[i])) {
            upper++;
        } else if (isdigit(text[i])) {
            digit++;
        }
    }
    cout << upper << endl << digit ;
}