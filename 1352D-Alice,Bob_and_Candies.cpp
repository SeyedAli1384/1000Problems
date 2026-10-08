#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &x : a)
      cin >> x;

    int l = 0, r = n - 1;

    int alice = 0, bob = 0;
    int lastAlice = 0, lastBob = 0;

    int moves = 0;

    while (l <= r) {

      int curAlice = 0;

      while (l <= r and curAlice <= lastBob) {
        curAlice += a[l];
        l++;
      }

      alice += curAlice;
      lastAlice = curAlice;
      moves++;

      if (l > r)
        break;

      int curBob = 0;

      while (l <= r and curBob <= lastAlice) {
        curBob += a[r];
        r--;
      }

      bob += curBob;
      lastBob = curBob;
      moves++;
    }

    cout << moves << ' ' << alice << ' ' << bob << endl;
  }
}
