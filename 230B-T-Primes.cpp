#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isPrime(ll n) {
    if (n < 2)
        return false;

    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        ll x;
        cin >> x;

        ll root = sqrtl(x);

        if (root * root == x and isPrime(root))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
