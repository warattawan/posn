#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N, M, Q, r1, c1, r2, c2;
    cin >> N >> M;
    int area[N+1][M+1];
    for (int i=1;i<=N;i++) {
        for (int j=1;j<=
            M;j++) {
            cin >> area[i][j];
        }
    }
    cin >> Q;
    int ans[Q];
    for (int i=0;i<Q;i++) {
        cin >> r1 >> c1 >> r2 >> c2;
        int sum=0;
        for (int j=r1;j<=r2;j++) {
            for (int k=c1;k<=c2;k++) {
                sum += area[j][k];
            }
        }
        ans[i]=sum;
    }
    for (int i=0; i<Q; i++) {
        cout << ans[i];
        if (i!=Q-1) cout << '\n';
    }
}