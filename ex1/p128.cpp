#include <bits/stdc++.h> //ยังไม่เส้จ
using namespace std;
int main() 
{
    string text ;
    vector<int> nums;
    getline(cin, text) ;
    int count = 0 ;
    for (int i=0; i<=text.size(); i++) {
        if (text[i]=='1') {
            count++ ;
        } else {
            nums.push_back(count) ;
            count = 0 ;
        }
    }
    int n = nums.size() ;
    for (int i = n-1 ; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (nums[j] < nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    for (int i=0; i<n; i++) {
        cout << nums[i] ;
    }
} 