#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    map<int, int> cnt;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;

      for (int p = 2; p * p <= x; p++) {
        while (x % p == 0) {
          cnt[p]++;
          x /= p;
        }
      }

      if (x > 1) {
        cnt[x]++;
      }
    }

    bool possible = true;

    for (auto [prime, exponent] : cnt) {
      if (exponent % n != 0) {
        possible = false;
        break;
      }
    }

    cout << (possible ? "YES\n" : "NO\n");
  }
}
