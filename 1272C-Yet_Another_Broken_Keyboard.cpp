#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    bool allowed[26] = {};

    for (int i = 0; i < k; i++) {
        char c;
        cin >> c;
        allowed[c - 'a'] = true;
    }

    long long ans = 0;
    long long cnt = 0;

    for (char c : s) {
        if (allowed[c - 'a']) {
            cnt++;
        } else {
            ans += cnt * (cnt + 1) / 2;
            cnt = 0;
        }
    }

    ans += cnt * (cnt + 1) / 2;

    cout << ans << endl;

    return 0;
}
