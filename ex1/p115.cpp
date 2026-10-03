#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int r,c,i,j,target;
    cin >> r >> c;
    vector<vector<int>> table(r,vector<int>(c));
    vector<vector<int>> list(r,vector<int>(c));
    for (i=0; i<r; i++) for (j=0; j<c; j++) cin >> table[i][j];
    cin >> target;
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            int count=0;
            if (table[i][j]==target) count--;
            for (int k=0; k<r; k++) if (table[k][j]==target) count++;
            for (int l=0; l<c; l++) if (table[i][l]==target) count++;
            list[i][j] = count; 
        }
    }
    int max = -1;
    int sum=0;
    for (auto x:list) for (int y:x) if (y>max) max = y;
    cout << max << '\n';
    for (auto x:list) for (int y:x) if (max == y) sum++; 
    cout << sum << '\n';
    for (i=0; i<r; i++) for (j=0; j<c; j++) if (max == list[i][j]) cout << i+1 << " " << j+1 << '\n'; 
}