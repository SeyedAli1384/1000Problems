#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int target = 0;
    int pos = 0;
    int q = 0;

    for (char c : s1) {
        if (c == '+')
            target++;
        else
            target--;
    }

    for (char c : s2) {
        if (c == '+')
            pos++;
        else if (c == '-')
            pos--;
        else
            q++;
    }

    int diff = target - pos;

    if (abs(diff) > q || (diff + q) % 2 != 0) {
        cout << fixed << setprecision(12) << 0.0 << endl;
        return 0;
    }

    int x = (diff + q) / 2;

    double favorable = 1;
    double total = 1;

    for (int i = 1; i <= x; i++) {
        favorable *= (q - i + 1);
        favorable /= i;
    }

    for (int i = 0; i < q; i++)
        total *= 2;

    cout << fixed << setprecision(12)
         << favorable / total << endl;

    return 0;
}
