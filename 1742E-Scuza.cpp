#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        vector<long long> psum(n);
        vector<long long> pmax(n);

        for (auto &x : a)
            cin >> x;

        psum[0] = a[0];
        pmax[0] = a[0];

        for (int i = 1; i < n; i++) {
            psum[i] = psum[i - 1] + a[i];
            pmax[i] = max(pmax[i - 1], a[i]);
        }

        while (q--) {
            long long k;
            cin >> k;

            int pos = upper_bound(pmax.begin() , pmax.end() , k) - pmax.begin();

            if (pos == 0)
                cout << 0 << " ";
            else
                cout << psum[pos - 1] << " ";
        }

        cout << endl;
    }
}
