#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    double pi = M_PI ;
    int n ;
    cin >> n ;
    double r[n] ;
    double area[n] ;
    double perimeter[n] ;
    for (int i=0; i<n; i++) {
        cin >> r[i] ;
        area[i] = (pi)*(pow(r[i],2)) ;
        perimeter[i] = 2*(pi)*r[i] ;
    }
    double max_area = 0 ;
    double max_per = 0 ;
    for (int j=0; j<n; j++) {
        if (max_area<area[j]) max_area = area[j] ;
        if (max_per<perimeter[j]) max_per = perimeter[j] ;
    }
    cout << fixed << setprecision(3) ;
    for (int k=0; k<n; k++) {
        cout << "Area of circle " << k+1 << ": " << area[k] << endl ;
        cout << "Perimeter of circle " << k+1 << ": " << perimeter[k] << endl ;
    }
    cout << "The maximum area is: " << max_area << endl;
    cout << "The maximum perimeter is: " << max_per ;
}