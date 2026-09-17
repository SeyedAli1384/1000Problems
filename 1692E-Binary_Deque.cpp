#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        
	for (int &v : a)
            cin >> v;

        int l = 0;
        int sum = 0;
        int best = -1;

        for (int r = 0; r < n; r++) {
            sum += a[r];

            while (l <= r && sum > x) {
                sum -= a[l];
                l++;
            }

            if (sum == x)
                best = max(best, r - l + 1);
        }

        if (best == -1)
            cout << -1 << endl;
        else
            cout << n - best << endl;
    }

    return 0;
}
