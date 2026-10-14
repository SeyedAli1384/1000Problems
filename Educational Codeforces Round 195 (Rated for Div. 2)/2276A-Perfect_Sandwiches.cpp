#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a , b;
        cin >> a >> b;

        if (b >= a){
            cout << "-1" << endl;
            continue;
        }

        cout << min(b, a-b) << endl;
    }
    return 0;
}