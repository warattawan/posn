#include <bits/stdc++.h>
using namespace std;
int main()
{
    string nums ;
    int count=0;
    getline(cin, nums) ;
    stringstream ss(nums);
    double sum=0.00, x;
    while (ss >> x) {
        sum += x;
        count++;
    }
    cout << fixed << setprecision(1) << sum << endl ;
    cout << count << endl;
    float avg=sum/count;
    if (sum==0.0 && count==0) avg=0.0 ;
    cout << fixed << setprecision(1) << avg; 

}