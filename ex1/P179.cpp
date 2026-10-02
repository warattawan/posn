#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    float M;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    for (int i=n-1; i>0; i--) {
        for (int j=0; j<i; j++) {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "sort:";
    for (int i=0; i<n; i++) cout << " " << arr[i] ;
    int med = (n+1)/2;
    cout << '\n' << "median: ";
    cout << fixed << setprecision(1);
    if (n%2 == 0) M = (arr[med-1]+arr[med])/2.0;
    else M = arr[med-1];
    cout << M;
}