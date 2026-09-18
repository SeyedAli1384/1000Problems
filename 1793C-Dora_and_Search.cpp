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

        int l = 0, r = n - 1;
        int mn = 1, mx = n;

        while (l < r) {
            if (a[l] == mn || a[l] == mx) {
                if (a[l] == mn) mn++;
                else mx--;
                l++;
            }
            else if (a[r] == mn || a[r] == mx) {
                if (a[r] == mn) mn++;
                else mx--;
                r--;
            }
            else {
                break;
            }
        }

        if (l >= r)
            cout << -1 << endl;
        else
            cout << l + 1 << ' ' << r + 1 << endl;
    }

    return 0;
}
