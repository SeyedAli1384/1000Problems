#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        a[i] = sum;
    }

    int m;
    cin >> m;

    while (m--) {
        int juicy;
        cin >> juicy;

        int pos = lower_bound(a.begin(), a.end(), juicy) - a.begin();

        cout << pos + 1 << endl;
    }

    return 0;
}
