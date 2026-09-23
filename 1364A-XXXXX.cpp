#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        long long sum = 0;

        for (int &v : a) {
            cin >> v;
            sum += v;
        }

        if (sum % x != 0) {
            cout << n << endl;
            continue;
        }

        int left = -1;
        int right = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] % x != 0) {
                left = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] % x != 0) {
                right = i;
                break;
            }
        }

        if (left == -1) {
            cout << -1 << endl;
        } else {
            cout << max(n - left - 1, right) << endl;
        }
    }

    return 0;
}
