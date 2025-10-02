#include <iostream>
using namespace std ;
int main()
{
    int n, k, m=0, count=1;
    cin >> n >> k ;
    int num[n] = {},i,j,temp ;
    while (m<n) {
        cin >> num[m] ;
        m++ ;
    }
    for (i=n-1; i>0; i--) {  
        for (j=0; j<i; j++) {
            if(num[j]>num[j+1]) {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    for (i=0; i<n; i++) {
        if (i != n-1 && num[i]==num[i+1]) {
            count++ ;
        } else {
            if (count>=k) {
                cout << num[i] << ": " ;
                for (int p=0; p<count; p++) {
                    cout << "*" ;
                }
                cout << endl ;
            }
            count = 1;
        }
    }
}