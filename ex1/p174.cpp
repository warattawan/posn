#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int r,c,i,j,sum=0;;
    cin >> r >> c;
    vector<vector<int>> matrix(r,vector<int>(c));
    for (i=0; i<r; i++) for (j=0; j<c; j++) cin >> matrix[i][j];
    for (i=1; i<r-1; i++) {
        for (j=1; j<c-1; j++) {
            sum += matrix[i][j];
        }
    }
    cout << sum;
}