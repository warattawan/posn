#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{
    int n, m=0;
    float sum = 0.0;
    cin >> n ;
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
    cout << "sort: " ;
    for (i=0; i<n; i++) {
        cout << num[i] << " " ;
        if (i == 0 | i + 1 == n ) {
            sum += num[i] ;
        }
    }
    float med = sum/2 ;
    cout << endl << "median: " << fixed << setprecision(1) << med;
}