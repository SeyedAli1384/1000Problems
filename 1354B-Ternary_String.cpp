#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int last[3] = {-1, -1, -1};
        int ans = INT_MAX;

        for (int i = 0; i < (int)s.size(); i++) {
            last[s[i] - '1'] = i;

            if (last[0] != -1 && last[1] != -1 && last[2] != -1) {
                int left = min({last[0], last[1], last[2]});
                int right = max({last[0], last[1], last[2]});

                ans = min(ans, right - left + 1);
            }
        }

        cout << (ans == INT_MAX ? 0 : ans) << endl;
    }

    return 0;
}
