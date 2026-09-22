#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> d(n) , x(n) , y(n);

        for (auto &i : x)
            cin >> i;

	for (auto &i : y)
	    cin >> i;

	for (auto i=0 ; i < n ; i++)
		d[i] = y[i] - x[i];

        sort(d.begin(), d.end());

        int l = 0;
        int r = n - 1;
        int ans = 0;

        while (l < r) {
            if (d[l] + d[r] >= 0) {
                ans++;
                l++;
                r--;
            } else {
                l++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
