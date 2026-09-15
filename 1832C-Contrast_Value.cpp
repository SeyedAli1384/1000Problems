#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;

    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    int ans = 1;
    int direction = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1])
            continue;

        int newDirection = (a[i] > a[i - 1]) ? 1 : -1;

        if (direction == 0) {
            direction = newDirection;
            ans++;
        }
        else if (newDirection != direction) {
            ans++;
            direction = newDirection;
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}
