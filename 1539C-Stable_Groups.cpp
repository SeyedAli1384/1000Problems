#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x , n , k;
    cin >> n >> k >> x;

    vector<long long> a(n);

    for (auto &v : a)
        cin >> v;

    sort(a.begin(), a.end());

    vector<long long> need;

    for (int i = 1; i < n; i++) {
        long long gap = a[i] - a[i - 1];

        if (gap > x) {
            need.push_back((gap - 1) / x);
        }
    }

    sort(need.begin(), need.end());

    int groups = need.size() + 1;

    for (long long required : need) {
        if (k >= required) {
            k -= required;
            groups--;
        }
    }

    cout << groups << '\n';

    return 0;
}
