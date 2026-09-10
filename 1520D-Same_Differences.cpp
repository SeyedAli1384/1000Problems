#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<int, long long> freq;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            int key = i - x;

            ans += freq[key];
            freq[key]++;
        }

        cout << ans << endl;
    }

    return 0;
}
