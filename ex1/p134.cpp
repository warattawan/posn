#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    const double g = 9.81 ;
    double m_patapim, m_sahur, h, v, E_patapim, E_sahur;
    cin >> m_patapim >> h ;
    cin >> m_sahur >> v ;
    E_patapim = m_patapim * g * h * 1000 ;
    E_sahur = 0.5 * m_sahur * v * v ;
    cout << fixed << setprecision(2) ;
    if (E_patapim>E_sahur) {
        if (E_patapim-E_sahur<0.1) {
            cout << "=" ;
        } else {
            cout << "Brr Brr Patapim " << E_patapim-E_sahur << " Joules" ;
        } 
    } else if (E_patapim<E_sahur) {
        if (E_sahur-E_patapim<0.1) {
            cout << "=" ;
        } else {
            cout << "Tung Tung Tung Sahur " << E_sahur-E_patapim << " Joules" ;
        } 
    } else if (E_patapim==E_sahur) cout << "=" ;
    
}