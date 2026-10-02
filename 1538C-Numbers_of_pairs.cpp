#include <bits/stdc++.h>

using namespace std;

long long countPairs(vector<long long> &a, long long x) {
  int l = 0, r = a.size() - 1;
  long long ans = 0;

  while (l < r) {
    if (a[l] + a[r] <= x) {
      ans += r - l;
      l++;
    } else {
      r--;
    }
  }

  return ans;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    long long l, r;
    cin >> n >> l >> r;

    vector<long long> a(n);

    for (auto &x : a)
      cin >> x;

    sort(a.begin(), a.end());

    cout << countPairs(a, r) - countPairs(a, l - 1) << endl;
  }
}
