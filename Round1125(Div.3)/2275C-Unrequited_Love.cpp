#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (auto &x : a)
      cin >> x;

    int m = n - 4;

    vector<pair<long long, int>> v;
    v.reserve(m);

    for (int i = 0; i < m; i++) {
      long long sum = a[i] + a[i + 2] - a[i + 4];
      v.push_back({sum, i});
    }

    sort(v.begin(), v.end());

    long long answer = 0;

    int l = 0;

    while (l < m) {
      int r = l;

      while (r < m and v[r].first == v[l].first)
        r++;

      long long len = r - l;
      answer += len * (len - 1) / 2;

      for (int i = l; i < r; i++) {
        for (int d : {2, 4}) {
          if (binary_search(v.begin() + l, v.begin() + r,
                            make_pair(v[i].first, v[i].second + d))) {
            answer--;
          }
        }
      }

      l = r;
    }

    cout << answer << endl;
  }

  return 0;
}
