#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    float avg,sum=0;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
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
    avg = sum/n;
    cout << '\n' << "avg: ";
    cout << fixed << setprecision(2) << avg;
}