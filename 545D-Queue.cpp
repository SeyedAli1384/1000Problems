#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long> t(n);
  for (auto &x : t)
    cin >> x;

  sort(t.begin(), t.end());

  priority_queue<long long> pq;
  long long total = 0;

  for (long long x : t) {
    pq.push(x);
    total += x;

    if (total > 2 * x) {
      total -= pq.top();
      pq.pop();
    }
  }

  cout << pq.size() << endl;
  return 0;
}
