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

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int x = 1; x * a[i] <= 2 * n; x++) {

                int j = a[i] * x - i - 2;

                if (j > i && j < n && a[j] == x)
                    ans++;
            }
        }

        cout << ans << endl;
    }
}
