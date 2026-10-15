#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, x, m;
    cin >> n >> x >> m;

    int L = x, R = x;

    for (int i = 0; i < m; i++) {
      int l, r;
      cin >> l >> r;

      if (l <= R and r >= L) {
        L = min(L, l);
        R = max(R, r);
      }
    }

    cout << R - L + 1 << endl;
  }
  return 0;
}
