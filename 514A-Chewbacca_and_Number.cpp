#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;

    for (int i = 0; i < n.size(); i++) {
        int digit = n[i] - '0';
        int converted = 9 - digit;

        if (i == 0 && converted == 0) {
            continue;
        }

        if (converted < digit) {
            n[i] = converted + '0';
        }
    }

    cout << n << endl;

    return 0;
}
