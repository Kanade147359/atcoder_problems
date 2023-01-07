#include <bits/stdc++.h>
using namespace std;

long long N, K, L;
long long A[1 << 18];

bool solve(long long M) {
    long long cnt = 0, pre = 0;
    for (int i = 1; i <= N; i++) {
        if (A[i] - pre >= M && L - A[i] >= M) {
            cnt += 1;
            pre = A[i];
        }
    }
    if (cnt >= K) return true;
    return false;
}
int main() {
    
}