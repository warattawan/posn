#include <bits/stdc++.h>
using namespace std ;
void swap(int *, int *) ;
int main() {
    int x = 5, y = 10;
    cout << "before " << x << " " << y << endl;
    swap(&x,&y);
    cout << "after " << x << " " << y << endl;
    return 0;
}
void swap(int *px, int *py) {
    int temp ;
    temp = *px;
    *px = *py;
    *py = temp;
}