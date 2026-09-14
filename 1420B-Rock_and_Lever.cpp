#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> cnt(32, 0);

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            int highestBit = 63 - __builtin_clzll(x);
            cnt[highestBit]++;
        }

        long long ans = 0;

        for (long long c : cnt) {
            ans += c * (c - 1) / 2;
        }

        cout << ans << endl;
    }
}
