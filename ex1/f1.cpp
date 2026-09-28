#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000 + 5;
double t[MAXN];

double total_time_when_pit_at(int N, double P, double x, int pitLap) {
    double sum = 0.0;
    for (int i = 1; i <= N; ++i) {
        double lap = t[i];
        if (pitLap != 0) {
            if (i == pitLap)             sum += P;        
            if (i > pitLap && i <= pitLap + 3) lap -= x;  
        }
        sum += lap;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    double P, x;
    if(!(cin >> N >> P >> x)) return 0;
    for (int i = 1; i <= N; ++i) cin >> t[i];


    double bestTime = total_time_when_pit_at(N, P, x, 0);
    int bestLap = 0; 


    for (int k = 1; k <= N; ++k) {
        double cand = total_time_when_pit_at(N, P, x, k);
        if (cand < bestTime) {
            bestTime = cand;
            bestLap = k;
        }
    }

    cout << fixed << setprecision(1);
    if (bestLap == 0) cout << "No pit : " << bestTime ;
    else              cout << "Pit at lap " << bestLap << " : " << bestTime ;
    return 0;
}

