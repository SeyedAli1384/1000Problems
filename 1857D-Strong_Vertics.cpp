#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<long long> a(n), b(n);

    for (auto &x : a)
      cin >> x;

    for (auto &x : b)
      cin >> x;

    vector<long long> c(n);

    long long mx = LLONG_MIN;

    for (int i = 0; i < n; i++) {
      c[i] = a[i] - b[i];
      mx = max(mx, c[i]);
    }

    vector<int> ans;

    for (int i = 0; i < n; i++) {
      if (c[i] == mx)
        ans.push_back(i + 1);
    }

    cout << ans.size() << endl;

    for (int x : ans)
      cout << x << ' ';

    cout << endl;
  }
}
