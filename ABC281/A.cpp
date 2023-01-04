#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i < (int)(n); i++)


int main() {
    int N;
    cin >> N;
    int num = N;
    while (true) {
        cout << num << endl;
        if (num == 0){
            break;
        }
        num -= 1;
    }
}