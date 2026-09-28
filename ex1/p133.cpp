#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    int n ;
    cin >> n ;
    vector<int> nums ;
    for (int i=0; i<n; i++) {
        int x ;
        cin >> x ;
        nums.push_back(x) ;
    }
    cout << n << endl ;
    for (int i=0; i<n; i++) {
        cout << nums[i] << " " ;
    }
    for (int i = n-1 ; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    int solitary ;
    for (int j=0; j<nums.size(); ) {
        if (nums[j] == nums[j+1] && j+1 < n) {
            j += 2;
        } else {
            solitary = nums[j] ;
            break;
        }
    }
    cout << endl << "The Solitary Number is " << solitary ;
}