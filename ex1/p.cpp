#include <bits/stdc++.h>
using namespace std;
bool IsPrime (int num) {
    if (num<=1) {
        return false;
    }
    for (int i=2; i<=num; i++) {
        if (num % i == 0 && i!= num) {
            return false;
        } else if (i == num) {
            return true;
        }
    }
}
int main() 
{
    int num;
    cin >> num ;
    if (IsPrime(num)) cout << "Prime";
    else cout << "Not Prime";
}