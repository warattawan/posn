#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num,new_num="";
    cin >> num;
    int x = num.size()-1;
    for (int i=0; i<=x; i++) {
        new_num += num[x-i];
    }
    cout << new_num;
}