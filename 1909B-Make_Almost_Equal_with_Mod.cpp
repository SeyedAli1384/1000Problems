#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;

        long long k = 2;

        while (true) {
            set<long long> rem;

            for (long long x : a)
                rem.insert(x % k);

            if (rem.size() == 2) {
                cout << k << endl;
                break;
            }

            k *= 2;
        }
    }

    return 0;
}
