#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool possible(ll k, const vector<ll>& a, ll h) {
    ll total = 0;

    for (int i = 0; i + 1 < a.size(); i++) {
        total += min(k, a[i + 1] - a[i]);

        if (total >= h)
            return true;
    }

    total += k;

    return total >= h;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        ll h;
        cin >> n >> h;

        vector<ll> a(n);

        for (ll &x : a)
            cin >> x;

        ll lo = 1;
        ll hi = h;

        while (lo < hi) {
            ll mid = lo + (hi - lo) / 2;

            if (possible(mid, a, h))
                hi = mid;
            else
                lo = mid + 1;
        }

        cout << lo << endl;
    }

    return 0;
}
