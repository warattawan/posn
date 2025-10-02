#include <bits/stdc++.h> 
using namespace std ;
int main()
{
    float S, oil_use, oil_price, people, costs, costs_person ;
    cin >> S >> oil_use >> oil_price >> people ;
    costs = S/oil_use*oil_price ;
    costs_person = costs/people ;
    cout << "costs = " << costs << '\n' << "costs per person = " << costs_person ;
}