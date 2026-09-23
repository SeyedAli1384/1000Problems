#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        int different = -1;

        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                different = i;
                break;
            }
        }

        if (different == -1) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                cout << 1 << " " << i + 1 << endl;
            }
        }

        for (int i = 1; i < n; i++) {
            if (a[i] == a[0]) {
                cout << different + 1 << " " << i + 1 << endl;
            }
        }
    }

    return 0;
}
