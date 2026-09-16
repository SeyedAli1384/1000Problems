#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

long long power(long long a, long long b) {
    long long ans = 1;

    while (b > 0) {
        if (b & 1)
            ans = ans * a % MOD;

        a = a * a % MOD;
        b >>= 1;
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        cout << power(n, k) << endl;
    }

    return 0;
}
