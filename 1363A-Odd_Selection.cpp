#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int odd = 0, even = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (a % 2)
                odd++;
            else
                even++;
        }

        bool possible = false;

        for (int o = 1; o <= min(x, odd); o += 2) {
            int e = x - o;

            if (e <= even) {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
