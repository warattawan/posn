#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string num;
    int x;
    getline(cin, num);
    stringstream ss(num);
    vector<int> uns, s;
    while (ss >> x) uns.push_back(x);
    s = uns;
    sort(s.begin(), s.end());
    while (uns.size()!=1) {
        int mid_i = ((s.size()+1)/2)-1;
        int mid = s[mid_i], side_mid;
        s.erase(mid_i+s.begin());
        auto target = find(uns.begin(), uns.end(), mid);
        int target_i = target - uns.begin(); 
        if (target_i!=uns.size()-1) {
            side_mid = uns[target_i+1];
            uns.erase(target);
            uns.erase(target);
        } else {
            side_mid = uns[0];
            uns.erase(target);
            uns.erase(uns.begin());
        }
        auto side_target = find(s.begin(), s.end(),side_mid);
        s.erase(side_target);
    }
    cout << s[0];
    
}