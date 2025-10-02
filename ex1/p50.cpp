#include <iostream>
using namespace std;
int main()
{
    int N, i, SI = 1, SI_past = 1 ;
    cin >> N ;
    int num[N];
    for (i=0; i<N; i++) {
        cin >> num[i] ;
    }
    int past = num[0] ;
    for (i=1; i<N; i++) {
        if (num[i] > past) {
            SI++ ;
        } else {
            SI_past = SI ;
            SI = 1 ;
        }
        past = num[i] ;
    }
    if (SI_past > SI) {
        cout << SI_past ;
    } else {
        cout << SI ;
    }
}
    