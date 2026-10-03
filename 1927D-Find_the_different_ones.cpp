#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  vector<int> nextDiff(n, n);

  for (int i = n - 2; i >= 0; i--) {
    if (a[i] != a[i + 1])
      nextDiff[i] = i + 1;
    else
      nextDiff[i] = nextDiff[i + 1];
  }

  int q;
  cin >> q;

  while (q--) {
    int l, r;
    cin >> l >> r;

    --l;
    --r;

    if (nextDiff[l] <= r) {
      cout << l + 1 << ' ' << nextDiff[l] + 1 << endl;
    } else {
      cout << -1 << ' ' << -1 << endl;
    }
  }
}

int main() {
  int t;
  cin >> t;

  while (t--)
    solve();
}
