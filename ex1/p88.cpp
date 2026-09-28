#include <bits/stdc++.h>
using namespace std;
int magic(int power, int type) {
    int n = power ;
    int sum = 0 ;
    while (n>0) {
        if ((n%10)%2 != 0) {
            sum += n % 10 ;
        }
        n /= 10 ;
    }
    if (type == 1) {
        return (power*2) + (sum*1) ;
    } else if (type == 2) {
        return (power*3) + (sum*2) ;
    } else if (type == 3) {
        return (power*1) + (sum*3) ;
    }
}
int main()
{
    int x, power, type;
    cin >> x;
    for (int i=0; i<x; i++) {
        cin >> power >> type ;
        int final = magic(power,type) ;
        cout << final << endl;
    }
    
}