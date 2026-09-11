#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> u = v;
    sort(u.begin(), u.end());

    vector<long long> pv(n + 1, 0);
    vector<long long> pu(n + 1, 0);

    for (int i = 0; i < n; i++) {
        pv[i + 1] = pv[i] + v[i];
        pu[i + 1] = pu[i] + u[i];
    }

    int m;
    cin >> m;
    
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
            cout << pv[r] - pv[l - 1] << endl;
        } else {
            cout << pu[r] - pu[l - 1] << endl;
        }
    }

    return 0;
}
