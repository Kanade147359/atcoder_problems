#include <bits/stdc++.h>
using namespace std;
//パケット法
int main() {
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> d[i];
    //パケット法
    /*
    int num [110] = {0};
    for (int i = 0; i < N; ++i) {
        num[d[i]]++;
    }

    int res = 0;
    for (int i = 1; i <= 100; ++i) {
        if (num[i]){
            ++res;
        }
    }
    */
   //std::set
   set<int> values;
   for (int i = 0; i < N; ++i) {
    values.insert(d[i]);
   } 
    //cout << res << endl;
    cout << values.size() << endl;
}

