#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    int n;
    cin >> n;
    string name[n] ;
    int score[n] ;
    int time[n] ;
    for (int i=0; i<n; i++) {
        cin >> name[i] >> score[i] >> time[i] ;
    }
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (score[i] > score[j] || (score[i] == score[j] && time[i] < time[j])) {
                swap(score[i], score[j]);
                swap(time[i],  time[j]);
                swap(name[i],  name[j]);
            }
        }
    } 
    for (int i=0; i<n; i++) {
        cout << name[i] << '\n';
    }
}
