#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3 ;
    cin >> num1 >> num2 >> num3 ;
    if (num1>num2 && num1>num3 && num2<num3) {
        cout << num3;
    } else if (num2>num1 && num2>num3 && num3<num1)  {
        cout << num1;
    } else { 
        cout << num2;
    }
}