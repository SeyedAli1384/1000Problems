#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n, m, a, b;

    cin >> n >> m >> a >> b;

    long long normal = n * a;

    long long special = (n / m) * b + (n % m) * a;

    long long all_special = ((n + m - 1) / m) * b;

    cout << min({normal, special, all_special}) << endl;

    return 0;
}
