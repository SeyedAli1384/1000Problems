#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int m = n * (n - 1) / 2;
        vector<int> b(m);

        for (int &x : b)
            cin >> x;

        sort(b.begin(), b.end());

        vector<int> ans;

        int idx = 0;

        for (int cnt = n - 1; cnt >= 1; cnt--) {
            ans.push_back(b[idx]);
            idx += cnt;
        }

        ans.push_back(b[m-1]);

        for (int x : ans)
            cout << x << ' ';

        cout << endl;
    }
}
