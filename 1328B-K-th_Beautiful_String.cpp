#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    int i = 1;

    while (k > i) {
      k -= i;
      i++;
    }

    string ans(n, 'a');

    ans[n - i - 1] = 'b';
    ans[n - k] = 'b';

    cout << ans << endl;
  }

  return 0;
}
