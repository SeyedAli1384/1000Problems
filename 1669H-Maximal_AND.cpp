#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int &x : a)
      cin >> x;

    int ans = 0;

    for (int bit = 30; bit >= 0; bit--) {
      int cnt = 0;

      for (int x : a) {
        if (x & (1 << bit))
          cnt++;
      }

      int need = n - cnt;

      if (need <= k) {
        k -= need;
        ans |= (1 << bit);
      }
    }

    cout << ans << endl;
  }
}
