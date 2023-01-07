#include <bits/stdc++.h>
using namespace std;

bool dp[110000];

int main() {
    int N, K; cin >> N >> K;
    vector<int> a(N);
    for (int i = 0;i < N; ++i) cin >> a[i];

    for (int i = 1; i <= K; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i-a[j] >= 0) dp[i] |= !dp[i-a[j]];
        }
    }
    if (dp[K]) cout << "First" << endl;
    else cout << "Second" << endl;
}