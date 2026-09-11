#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ones = 0;
    int current = 0;
    int best = -1;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 1) {
            ones++;
            current--;
        } else {
            current++;
        }

        best = max(best, current);
        current = max(current, 0);
    }

    cout << ones + best << endl;

    return 0;
}
