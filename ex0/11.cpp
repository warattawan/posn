#include <bits/stdc++.h> 
using namespace std ;
int main()
{
    string name ;
    int age, year, age_future ;
    cin >> name >> age >> year ;
    age_future = age + year ;
    cout << "name = " << name << '\n' << "age now = " << age << " years" << '\n' << "age future = " << age_future << " years";
}
