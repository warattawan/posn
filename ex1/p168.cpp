#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> H(N);
    vector<pair<int,int>> Peak;
    for (int i=0; i<N; i++) cin >> H[i];

    for (int i=1; i<N-1; i++) {
        if (H[i]>H[i-1] && H[i]>H[i+1]) Peak.push_back({0,i});
    }
    if (Peak.size()==0) {
        cout << "No Peak";
        return 0;
    }
    
    for (int i=0; i<Peak.size(); i++) {
        int count_V=0;
        for(int j=Peak[i].second-1; j>=0; j--) {
            if (H[j]>=H[Peak[i].second]) break;
            else count_V++;
        }
        for(int k=Peak[i].second+1; k<N; k++) {
            if (H[k]>=H[Peak[i].second]) break;
            else count_V++;
        }
        Peak[i].first=count_V;
    }
    
    sort(Peak.begin(),Peak.end());
    cout << Peak[Peak.size()-1].second+1 << " " << H[Peak[Peak.size()-1].second] << " " << Peak[Peak.size()-1].first;
    return 0;
}