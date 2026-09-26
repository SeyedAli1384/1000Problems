#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long a = -1, b = -1, c = -1;

        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                a = i;
                n /= i;
                break;
            }
        }

        if (a == -1) {
            cout << "NO" << endl;
            continue;
        }

	for (long long i = a + 1; i * i <= n; i++) {
            if (n % i == 0) {
                b = i;
                n /= i;
                break;
            }
        }

        if (b == -1 or n <= b or n == a) {
            cout << "NO" << endl;
            continue;
        }

        c = n;

        cout << "YES" << endl;
        cout << a << " " << b << " " << c << endl;
    }
}
