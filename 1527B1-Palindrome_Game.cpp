#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int zeros = count(s.begin(), s.end(), '0');

        if (zeros == 1) {
            cout << "BOB" << endl;
        }
        else if (zeros % 2 == 1) {
            cout << "ALICE" << endl;
        }
        else {
            cout << "BOB" << endl;
        }
    }

    return 0;
}
