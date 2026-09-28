#include <bits/stdc++.h>
using namespace std;
int main()
{
    int score;
    cin >> score;
    if (score>79) cout << 'A';
    else if (score>69) cout << 'B';
    else if (score>59) cout << 'C';
    else if (score>49) cout << 'D';
    else cout << 'F';
}