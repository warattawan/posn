#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    int sum = 0 ;
    int matrix[3][3] ;
    for (int n=0; n<3; n++) {
        for (int m=0; m<3; m++) {
            cin >> matrix[n][m] ;
            sum += matrix[n][m] ;
        }
    }
    cout << "Sum of all values: " << sum ;
}