#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    int n, Gx, Gy;
    cin >> n >> Gx >> Gy ;
    int Sx[n] ;
    int Sy[n] ;
    int Vx[n] ;
    int Vy[n] ;
    double STx[n] ;
    double STy[n] ;
    double satellite[n] ;
    for (int i=0; i<n; i++) {
        cin >> Sx[i] >> Sy[i] >> Vx[i] >> Vy[i] ;
        STx[i] = Sx[i] + Vx[i] ;
        STy[i] = Sy[i] + Vy[i] ;
    }
    cout << fixed << setprecision(2);
    const double EPS = 1e-9;
    double mn = 1e300;
    vector<int> best;
    for (int i=0; i<n; i++) {
        satellite[i] = sqrt(pow((STx[i]-Gx),2) + pow((STy[i]-Gy),2)) ;
        cout << "Satellite " << i+1 << ": " << satellite[i] << endl ;
        if (satellite[i] + EPS < mn) {      
            mn = satellite[i];
            best = {i + 1};
        } else if (fabs(satellite[i] - mn) <= EPS) { 
            best.push_back(i + 1);
        }
    }
    cout << "Best Satellite: ";
    for (size_t i = 0; i < best.size(); i++) {
        if (i) cout << ", ";
        cout << best[i];
    }
    cout << ", Distance: " << mn;
} 