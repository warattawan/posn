#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string data = "COMPUTER";
    for (int i = data.size()-1; i>=0; i--) {
        cout << "Index " << i << ": " << data[i] << endl ;
    }
}