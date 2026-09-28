#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count_e=0, count_o=0, i=1;
    cin >> n;
    do {
        if(i%2==0) count_e++;
        else count_o++;
        i++;
    } while (i<=n);
    cout << "e: " << count_e << ",o: " << count_o; 
}