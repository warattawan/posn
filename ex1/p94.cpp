#include <bits/stdc++.h> 
using namespace std;
int fibo(int n) {
    if (n==0 || n==1) {
        return n;
    } else {
        return (fibo(n-1)+fibo(n-2)) ;
    }
}
void printFibo(int n, int i = 0) {    
    if (i > n) { 
        return;
    } else {
        cout << ' ';
    }
    cout << fibo(i);
    printFibo(n, i + 1);
}
int main()
{
    int n;
    cin >> n;
    cout << "The Fibonacci value of " << n << " is: " << fibo(n) << endl;
    cout << "Fibonacci sequence up to " << n << ":" ;
    printFibo(n) ;
    return 0 ;
}