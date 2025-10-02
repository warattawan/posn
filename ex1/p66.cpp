#include <iostream>
#include <string>
using namespace std ;
int main()
{
    int n, m=0, i, j ;
    cin >> n ;
    string num[n];
    while (m<n) {
        cin >> num[m] ;
        m++ ;
    }
    for (i=n-1; i>0; i--) {
        for (j=0; j<i; j++) {
            if(num[j]>num[j+1]) {
                string temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    for (i=0; i<n; i++) {
        cout << num[i] << " " ;
    }
}