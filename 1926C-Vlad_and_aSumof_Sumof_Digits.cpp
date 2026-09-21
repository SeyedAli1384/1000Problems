#include <bits/stdc++.h>

using namespace std;

int digitSum(int x) {
    int sum = 0;

    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main() {
    int t;
    cin >> t;

    vector<int> n(t);
    int mx = 0;

    for (int &x : n) {
        cin >> x;
        mx = max(mx, x);
    }

    vector<int> prefix(mx + 1);

    for (int i = 1; i <= mx; i++) {
        prefix[i] = prefix[i - 1] + digitSum(i);
    }

    for (int x : n) {
        cout << prefix[x] << endl;
    }

    return 0;
}
