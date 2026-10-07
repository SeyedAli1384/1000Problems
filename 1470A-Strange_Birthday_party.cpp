#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<int> k(n);
    for (int &x : k)
      cin >> x;

    vector<long long> c(m + 1);
    for (int i = 1; i <= m; i++)
      cin >> c[i];

    sort(k.rbegin(), k.rend());

    long long ans = 0;
    int ptr = 1;

    for (int x : k) {
      if (ptr <= m and c[ptr] < c[x]) {
        ans += c[ptr];
        ptr++;
      } else {
        ans += c[x];
      }
    }

    cout << ans << endl;
  }

  return 0;
}
