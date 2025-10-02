#include <iostream>
using namespace std;
int main()
{
    int N, M, R, C, i, j, p, q, sum=0 ;
    cin >> N >> M >> R >> C ;
    int All_a[N][M];
    int Use_a[R][C];
    for (i=1; i<=N; i++) {
        for (j=1; j<=M; j++) {
            cin >> All_a[i][j] ;
        }
      int maxSum = 0;
    }
    for (int i = 0; i <= N - R; i++) {
        for (int j = 0; j <= M - C; j++) {
            int sum = 0;
            for (int x = 0; x < R; x++) {
                for (int y = 0; y < C; y++) {
                    sum += grid[i + x][j + y];
                }
            }
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }

    cout << maxSum << endl;
    return 0;
}
