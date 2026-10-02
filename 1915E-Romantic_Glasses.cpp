#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    set<long long> s;
    s.insert(0);

    long long sum = 0;
    bool ok = false;

    for (int i = 0; i < n; i++) {
      long long x;
      cin >> x;
      sum += (i % 2 == 0 ? x : -x);

      if (s.count(sum))
        ok = true;

      s.insert(sum);
    }

    cout << (ok ? "YES\n" : "NO\n");
  }
  return 0;
}
