#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string s;
        cin >> n >> s;

        vector<array<int,10>> a(n+2);

        a[n+1].fill(n+1);
     for (int i = n ; i > 0 ; i--){
            a[i] = a[i+1];

            a[i][s[i-1]-'0'] = i;
        }

        auto f = [&](int start , string pattern){
            int pos = start;
            for (char c : pattern){
                if (pos > n)
                    return n+1;
                pos = a[pos][c-'0'];
                if (pos == n+1)
                    return n+1;
                pos++;
            }
            return pos-1;
        };

        vector<ll> diffa(n+3 , 0) , diffb(n+3 , 0);

        auto add =[&](int l , int r , ll a , ll b){
            if (l > r)
                return;
            
            diffa[l] += a;
            diffa[r+1] -= a;
            diffb[l] += b;
            diffb[r+1] -= b;
        };

        for (int i = 1 ; i < n + 1 ; i++){
            int l = f(i , "2025");
            int p = f(i , "2026");
            int r = min(n , p-1);
            
            if (l > n or l > r)
                continue;
            
            ll cnt = r-l+1;

            add (i , l , cnt , 0);
            add (l+1 , r , r+1 , -1);
        }

        ll A=0 , B=0;

        for (int i = 1 ; i < n+1 ; i++){
            A += diffa[i];
            B += diffb[i];

            ll all = 1LL * i * (n-i+1);
            ll bad = A+B * i;

            cout << all - bad << (i == n ? '\n' : ' ');
        }  
    }
    return 0;
}