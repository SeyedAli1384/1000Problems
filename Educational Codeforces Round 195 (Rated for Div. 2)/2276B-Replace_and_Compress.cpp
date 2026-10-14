#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int n = s.size();
        int r = 1;

        for (int i = 1 ; i < n ; i++){
            if (s[i] != s[i-1])
                r++;
        }

        bool inc = false , dec = false ;

        for (int i = 1 ; i < n-1 ; i++){
            if (s[i-1] == s[i] and s[i] == s[i+1])
                inc = true;

            if (s[i-1] == s[i+1] and s[i] != s[i-1])
                dec = true;
        }

        cout << 1 + inc + dec << endl;
    }
    return 0;
}