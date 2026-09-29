#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N, M, R, C;
    cin >> N >> M >> R >> C;
    vector<int> list_sum;
    vector<vector<int>> area(N+1,vector<int>(M+1));
    for (int i=1;i<=N;i++) {
        for (int j=1;j<=M;j++) {
            cin >> area[i][j];
        }
    }

    for (int i=1;i<=N-R+1;i++) {
        for (int j=1;j<=M-C+1;j++) {
            int sum=0;
            for (int a=i; a<i+R; a++) {
                for (int b=j; b<j+C; b++) {
                    sum += area[a][b];
                }
            }
            list_sum.push_back(sum);
        }
    }
    cout << *max_element(list_sum.begin(),list_sum.end());
    return 0;
}