#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,X,i,target;
    cin >> N >> X;
    vector<pair<int,pair<int,int>>> Robot={};
    for (i=0; i<N; i++) {
        int id,s,t;
        cin >> id >> s >> t;
        Robot.push_back({-s,{t,id}});
    }
    sort(Robot.begin(),Robot.end());
    for (i=0; i<N; i++) {
        cout << Robot[i].second.second << " ";
        if (Robot[i].second.second == X) target = i+1;
    }
    cout << '\n' << target;
    

}