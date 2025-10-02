#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int i, N, Od = 0 , Ev = 0 ;
    string text = "" ;
    vector<int> nums;
    cin >> N ;
    for (i = 0; i<N; i++) {
        int x ;
        cin >> x;
        nums.push_back(x) ;
        if (x % 2 == 0) {
            Ev++ ;
        } else {
            Od++ ;
        }
        if (x > 0) {
            text = text + to_string(x) + " " ;
        } 
    }
    int max = nums[0], min = nums[0] ;
    for (i = 0; i<N; i++) {
        if (nums[i]<min) {
            min = nums[i] ;
        }
        if (nums[i]>max) {
            max = nums[i] ;
        }
    }
    if (text == "") {
        text = "NO POSITIVE" ;
    }
    cout << Ev << endl << Od << endl << max << endl << min << endl << text ;
}