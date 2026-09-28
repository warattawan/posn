#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3]={};
    for (int i=0; i<3; i++) cin >> arr[i];
    sort(arr,arr+3);
    if (pow(arr[2],2)==pow(arr[1],2)+pow(arr[0],2)) cout << "Right Triangle";
    else cout << "Not a Right Triangle";
}