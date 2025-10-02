#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, N, P = 0 , NP = 0 ;
    vector<int> nums;
    cin >> N ;
    for (i = 0; i<N; i++) {
        int x ;
        cin >> x;
        nums.push_back(x) ;
    }
    for (i = 0; i<N; i++) {
        if (nums[i]<10 || nums[i]>100) {
            P++ ;
        } else {
            NP += nums[i] ;
        }
    }
    cout << P << " " << NP ;
}