#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
/*指定した回数だけ処理を繰り返す
rep (i, 回数) {
  処理
}
*/
int A, B;
int main() {
   int ans = 1;
   cin >> A >> B;
   rep(i, B) {
    ans *= A;
   }
   cout << ans << endl;
}