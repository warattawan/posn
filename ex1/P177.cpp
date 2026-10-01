#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int R,C,count=0;
    cin >> R >> C;
    vector<vector<int>> table(R, vector<int>(C));
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            cin >> table[i][j];
        }
    }

    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {

            int min = *min_element(table[i].begin(), table[i].end());
            if (table[i][j]==min) {
                int max=0;
                for (int k=0; k<C; k++) {
                    if (table[k][j]>max) {
                        max=table[k][j];
                    }
                }
                if (min==max) count++;
            }
        }
    }
    cout << count;
}