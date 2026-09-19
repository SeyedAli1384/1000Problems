#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> cnt;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        int ans = 0;
        int prev = 0;

        for (auto [x, f] : cnt) {
            if (x != prev + 1) {
                ans += f;
            } else {
                ans += max(0, f - cnt[prev]);
            }

            prev = x;
        }

        cout << ans << '\n';
    }

    return 0;
}
