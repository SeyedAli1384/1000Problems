#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    vector<int> v;

    for (int i = 1; i <= n; i++) {
      cin >> a[i];

      if (a[i] < i)
        v.push_back(a[i]);
    }

    sort(v.begin(), v.end());

    long long ans = 0;
    int p = 0;

    for (int i = 1; i <= n; i++) {
      if (a[i] >= i)
        continue;

      while (p < (int)v.size() and v[p] <= i)
        p++;

      ans += v.size() - p;
    }

    cout << ans << endl;
  }
}
