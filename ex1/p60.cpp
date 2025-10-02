#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, N, total = 0 ;
    vector<int> nums;
    cin >> N ;
    for (i = 0; i<N; i++) {
        int x ;
        cin >> x;
        nums.push_back(x) ;
        total += x ;
    }
    cout << total ;
}