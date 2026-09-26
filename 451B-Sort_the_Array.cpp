#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &x : a)
        cin >> x;

    int l = -1, r = -1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            l = i;
            break;
        }
    }

    if (l == -1) {
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return 0;
    }

    r = l;

    while (r + 1 < n and a[r] > a[r + 1]) {
        r++;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;
    cout << l + 1 << " " << r + 1 << endl;

    return 0;
}
