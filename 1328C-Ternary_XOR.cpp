#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string a, b;
        bool split = false;

        for (char c : s) {
            if (c == '0') {
                a += '0';
                b += '0';
            }
            else if (c == '1') {
                if (!split) {
                    a += '1';
                    b += '0';
                    split = true;
                } else {
                    a += '0';
                    b += '1';
                }
            }
            else {
                if (!split) {
                    a += '1';
                    b += '1';
                } else {
                    a += '0';
                    b += '2';
                }
            }
        }

        cout << a << endl << b << endl;
    }

    return 0;
}
