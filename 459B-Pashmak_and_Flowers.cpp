#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (auto &x : a)
        cin >> x;

    long long mn = *min_element(a.begin(), a.end());
    long long mx = *max_element(a.begin(), a.end());

    long long cntMin = 0;
    long long cntMax = 0;

    for (long long x : a) {
        if (x == mn) cntMin++;
        if (x == mx) cntMax++;
    }

    long long ways;

    if (mn == mx)
        ways = 1LL * n * (n - 1) / 2;
    else
        ways = cntMin * cntMax;

    cout << mx - mn << ' ' << ways << endl;
}
