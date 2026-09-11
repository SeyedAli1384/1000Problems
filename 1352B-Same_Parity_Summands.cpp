#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (n >= k && (n - k) % 2 == 0) {
            cout << "YES\n";

            for (int i = 0; i < k - 1; i++)
                cout << 1 << " ";

            cout << 1 + (n - k) << endl;
        }

        else if (n >= 2 * k && (n - 2 * k) % 2 == 0) {
            cout << "YES\n";

            for (int i = 0; i < k - 1; i++)
                cout << 2 << " ";

            cout << 2 + (n - 2 * k) << endl;
        }

        else {
            cout << "NO\n";
        }
    }

    return 0;
}
