#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    stack<int> memory;
    vector<bool> printed(n + 1, false);

    for (int i = 1; i <= n; i++) {

      if (s[i - 1] == '1') {
        memory.push(i);
      } else if (s[i - 1] == '2') {

        if (!memory.empty()) {
          int doc = memory.top();
          memory.pop();
          printed[doc] = true;
        } else {
          printed[i] = true;
        }
      } else {
        printed[i] = true;
      }
    }

    int k = 0;

    for (int i = 1; i <= n; i++) {
      if (!printed[i]) {
        k++;
      }
    }

    cout << k << endl;

    for (int i = 1; i <= n; i++) {
      if (!printed[i]) {
        cout << i << ' ';
      }
    }

    cout << endl;
  }

  return 0;
}
