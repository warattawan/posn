#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,max=0,id,c_m=0;
    cin >> n;
    vector<long long> list(n);
    for (int i=0; i<n; i++) cin >> list[i];

    for (int i=0; i<n-1; i++) {
        long long count=0;
        for (int j=i+1; j<n; j++) {
            if (list[i]<list[j]) count++;
        }
        if (count>max) max=count;
    }
    vector<long long> s_list(n);
    s_list = list;
    sort(s_list.begin(),s_list.end());
    long long most = s_list[n-1];
    for (int i=0; i<n; i++) if(list[i]==most) c_m++;
    cout << max << '\n' << most << '\n' << c_m << '\n';
    for (int i=0; i<n; i++) if(list[i]==most) cout << i << " ";
    
}