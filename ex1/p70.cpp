#include <bits/stdc++.h>
using namespace std;
int main()
{
    string data;
    int sum=0;
    int product=1;
    int count=0;
    int freq = 1;
    vector<int> nums;
    cin >> data ;
    for (int i=0; i<data.size(); i++) {
        if (isdigit(data[i])) {
            int num = stoi(data.substr(i, 1)); //stoi รับแค่string แต่ data[i]เป็นchr
            sum += num ;
            product *= num ;
            count ++ ;
            nums.push_back(num);
        }
    }
    if (count==0) {
        cout << "No digits found in the input." ;
    } else {
        cout << "Sum of digits: " << sum << endl ;
        cout << "Product of digits: " << product << endl ;
        cout << "Number of unique digits: " << count << endl ;
        cout << "Frequency of each digit:" << endl ;
        for (int j=0; j<count; j++) {
            cout << "Digit " << nums[j] << ": 1 times" << endl;
        }
    }
}
