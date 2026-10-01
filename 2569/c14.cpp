#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num,new_num="";
    int i=0;
    cin >> num;
    int x = num.size()-1;
    while (i<=x) {
        new_num += num[x-i];
        i++;
    }
    cout << new_num;
}