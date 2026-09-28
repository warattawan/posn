#include <bits/stdc++.h>
using namespace std;
typedef struct info {
    string name ;
    int age;
    string school;
    string city;
} user_info ;
int main () {
    user_info info1 ;
    cin >> info1.name >> info1.age >> info1.school >> info1.city ;
    cout << info1.name << endl << info1.age << endl << info1.school << endl << info1.city ;
}