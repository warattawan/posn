#include <bits/stdc++.h>
using namespace std;
int main()
{
    string FULLname;
    getline(cin,FULLname) ;
    cout << FULLname.size() ;
    for (int i=0; i<FULLname.size(); i++) {
        if (isupper(FULLname[i])) {
            if (FULLname[i]<FULLname[i+1]) {
                text += FULLname;
            }
        }
    }
}