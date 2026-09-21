#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> w(n);
        for (int &x : w)
            cin >> x;

        sort(w.begin(), w.end());

        int ans = 0;

        for (int s = 2; s <= 2 * n; s++) {
            int l = 0;
            int r = n - 1;
            int teams = 0;

            while (l < r) {
                int sum = w[l] + w[r];

                if (sum == s) {
                    teams++;
                    l++;
                    r--;
                }
                else if (sum < s) {
                    l++;
                }
                else {
                    r--;
                }
            }

            ans = max(ans, teams);
        }

        cout << ans << endl;
    }

    return 0;
}
