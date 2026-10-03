#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<long long> a(n);
  long long total = 0;

  for (auto &x : a) {
    cin >> x;
    total += x;
  }

  long long pref = 0;
  long long maxPref = LLONG_MIN;

  for (int i = 0; i < n - 1; i++) {
    pref += a[i];
    maxPref = max(maxPref, pref);
  }

  long long suff = 0;
  long long maxSuff = LLONG_MIN;

  for (int i = n - 1; i > 0; i--) {
    suff += a[i];
    maxSuff = max(maxSuff, suff);
  }

  if (maxPref >= total || maxSuff >= total)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--)
    solve();
}
