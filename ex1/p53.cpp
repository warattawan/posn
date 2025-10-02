#include <iostream>
using namespace std;
int main()
{
    int R, C, i, j, count = 0 ;
    cin >> R >> C ;
    int num[R][C];
    for (i=0; i<R; i++) {
        for (j=0; j<C; j++) {
            cin >> num[i][j] ;
            if (num[i][j] == 1) {
                count++ ;
            }
        }
    }
    cout << count ; 
} 