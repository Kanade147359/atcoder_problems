#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    rep(i, N) {
        cin >> S[i];
    }
    reverse(S.begin(), S.end());
    rep(i, N) {
        cout << S[0] << endl;
    } 
}