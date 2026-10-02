#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,r,c,i,j,k;
    cin >> a >> r >> c;
    int stock[a][r][c];
    int list[a];
    int sum=0;
    for (i=0; i<a; i++) {
        for (j=0 ;j<r; j++) {
            for (k=0; k<c; k++) {
                cin >> stock[i][j][k];
                sum += stock[i][j][k];
            }
        }
        list[i] = sum;
        sum = 0;
    }
    int max=0;
    int num;
    for (i=0;i<a;i++) {
        if (list[i]>max) {
            max = list[i];
            num = i;
        }
    }
    cout << num+1 << " " << max;
}