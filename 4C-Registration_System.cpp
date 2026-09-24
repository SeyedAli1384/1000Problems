#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> users;

    while (n--) {
        string s;
        cin >> s;

        if (users[s] == 0) {
            cout << "OK" << endl;
        } else {
            cout << s << users[s] << endl;
        }

        users[s]++;
    }

    return 0;
}
