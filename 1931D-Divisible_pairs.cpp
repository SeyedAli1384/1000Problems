#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  long long x, y;
  cin >> n >> x >> y;

  map<pair<long long, long long>, long long> cnt;

  long long ans = 0;

  for (int i = 0; i < n; i++) {
    long long a;
    cin >> a;

    long long rx = a % x;
    long long ry = a % y;

    long long needX = (x - rx) % x;

    ans += cnt[{needX, ry}];

    cnt[{rx, ry}]++;
  }

  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}
