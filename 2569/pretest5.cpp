#include <bits/stdc++.h>
using namespace std;
int main()
{
    int price, paid;
    int list[5] = {1000,500,100,50,20};
    cin >> price >> paid;
    if (paid < price) {
        cout << "no money";
    } else if (paid == price) { 
        cout << "no change";
    } else if (paid > price) {
        int change = paid-price;
        for (int i=0; i<5; i++) {
            int amount = change/list[i];
            cout << list[i] << " = " << amount << endl;
            change -= amount*list[i];
        }
        cout << "coin = " << change; 
    }
}