#include <iostream>
using namespace std;
const int supermin = -1000000000; 
int A[200005], prevBest[200005], curEnd[200005], curBest[200005];

int main() {
    int N, K;
    cin >> N >> K;
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i <= N; ++i) prevBest[i] = 0;

    for (int k = 1; k <= K; ++k) {
        for (int i = 0; i <= N; ++i) curEnd[i] = curBest[i] = supermin;
        curEnd[0]  = supermin;
        curBest[0] = supermin;

        for (int i = 1; i <= N; ++i) {
            curEnd[i]  = max(curEnd[i-1] + A[i], prevBest[i-1] + A[i]);
            curBest[i] = (i == 1 ? curEnd[i] : max(curBest[i-1], curEnd[i]));
        }

        for (int i = 0; i <= N; ++i) prevBest[i] = curBest[i];
    }

    cout << prevBest[N] ;
    return 0;
}