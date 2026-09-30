#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int &x : a)
        cin >> x;

    for (int &x : b)
        cin >> x;

    sort(a.begin(), a.end());

    for (int x : b) {
        int l = 0, r = n;

        // Find first position where a[pos] > x
        while (l < r) {
            int mid = l + (r - l) / 2;

            if (a[mid] <= x)
                l = mid + 1;
            else
                r = mid;
        }

        cout << l << ' ';
    }

    return 0;
}
