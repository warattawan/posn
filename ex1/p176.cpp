#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,s,t,i,j,k;
    cin >> r >> s >> t;
    int stock[r][s][t];
    int list[r][s];
    int sum=0;
    for (i=0; i<r; i++) {
        for (j=0 ;j<s; j++) {
            for (k=0; k<t; k++) {
                cin >> stock[i][j][k];
                sum += stock[i][j][k];
            }
            list[i][j] = sum;
            sum = 0;
        }
    }
    int max=0;
    int room, num;
    for (i=0;i<r;i++) {
        for (j=0;j<s;j++)
            if (list[i][j]>max) {
                max = list[i][j];
                room = i;
                num = j;
            }
    }
    cout << room+1 << " " << num+1 << " " << max;
}