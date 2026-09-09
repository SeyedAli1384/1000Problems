#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    long long n, l;

    cin >> n >> l;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long left = a[0];

    long long right = l - a[n - 1];

    long long maxGap = 0;

    for (int i = 0; i < n - 1; i++) {
        maxGap = max(maxGap, a[i + 1] - a[i]);
    }

    double answer = max({
        (double)left,
        (double)right,
        maxGap / 2.0
    });

    cout << fixed << setprecision(10) << answer << endl;

    return 0;
}
