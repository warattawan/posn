#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> table(n,vector<int>(m));
    vector<int> list_ans;
    for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> table[i][j];
    for (int i=0; i<n; i++) {
        int sum=0;
        for (int j=0; j<m; j++) {
            sum += table[i][j];
        }
        list_ans.push_back(sum);
    }
    for (int i=0; i<n; i++) {
        cout << list_ans[i];
        if (i!=n-1) cout << '\n';
    }
    return 0;
}